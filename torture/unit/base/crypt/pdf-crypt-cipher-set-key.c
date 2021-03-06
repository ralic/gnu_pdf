/* -*- mode: C -*-
 *
 *       File:         pdf-crypt-cipher-decrypt.c
 *       Date:         Tue Dec 23 17:36:21 2008
 *
 *       GNU PDF Library - Unit tests for pdf_crypt_cipher_set_key
 *
 */

/* Copyright (C) 2008-2011 Free Software Foundation, Inc. */

/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <config.h>

#include <stdbool.h>
#include <stdio.h>
#include <pdf.h>
#include <check.h>

#include <pdf-test-common.h>

/*
 * Test: pdf_crypt_cipher_set_key_001
 * Description:
 *   Set a key of 16 bytes. (AESv2)
 * Success condition:
 *   Returns PDF_OK
 */
START_TEST (pdf_crypt_cipher_set_key_001)
{
  pdf_error_t *error = NULL;
  pdf_crypt_cipher_t *cipher;

  cipher = pdf_crypt_cipher_new (PDF_CRYPT_CIPHER_ALGO_AESV2, &error);
  fail_unless (cipher != NULL);
  fail_if (error != NULL);

  fail_unless (pdf_crypt_cipher_set_key (cipher,
                                         "0123456789abcdef", 16,
                                         &error) == PDF_TRUE);
  fail_if (error != NULL);

  pdf_crypt_cipher_destroy (cipher);
}
END_TEST


/*
 * Test: pdf_crypt_cipher_set_key_002
 * Description:
 *   Set a key of 3 bytes (AESv2)
 * Success condition:
 *   Fails (not multiple of 16)
 */
START_TEST (pdf_crypt_cipher_set_key_002)
{
  pdf_error_t *error = NULL;
  pdf_crypt_cipher_t *cipher;

  cipher = pdf_crypt_cipher_new (PDF_CRYPT_CIPHER_ALGO_AESV2, &error);
  fail_unless (cipher != NULL);
  fail_if (error != NULL);

  fail_if (pdf_crypt_cipher_set_key (cipher,
                                     "GNU", 3,
                                     &error) == PDF_TRUE);
  fail_unless (error != NULL);

  pdf_error_destroy (error);
  pdf_crypt_cipher_destroy (cipher);
}
END_TEST


/*
 * Test: pdf_crypt_cipher_set_key_003
 * Description:
 *   Set a key of 6 bytes (V2)
 * Success condition:
 *   Returns PDF_OK
 */
START_TEST (pdf_crypt_cipher_set_key_003)
{
  pdf_error_t *error = NULL;
  pdf_crypt_cipher_t *cipher;

  cipher = pdf_crypt_cipher_new (PDF_CRYPT_CIPHER_ALGO_V2, &error);
  fail_unless (cipher != NULL);
  fail_if (error != NULL);

  fail_unless (pdf_crypt_cipher_set_key (cipher,
                                         "GNUGNU", 6,
                                         &error) == PDF_TRUE);
  fail_if (error != NULL);

  pdf_crypt_cipher_destroy (cipher);
}
END_TEST

/*
 * Test case creation function
 */
TCase *
test_pdf_crypt_cipher_set_key (void)
{
  TCase *tc = tcase_create ("pdf_crypt_cipher_set_key");

  tcase_add_test (tc, pdf_crypt_cipher_set_key_001);
  tcase_add_test (tc, pdf_crypt_cipher_set_key_002);
  tcase_add_test (tc, pdf_crypt_cipher_set_key_003);
  tcase_add_checked_fixture (tc,
                             pdf_test_setup,
                             pdf_test_teardown);
  return tc;
}


/* End of pdf-crypt-cipher-set-key.c */
