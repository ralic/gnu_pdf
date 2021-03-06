/* -*- mode: C -*-
 *
 *       File:         pdf-realloc.c
 *       Date:         Wed Sep 10 21:28:49 2008
 *
 *       GNU PDF Library - Allocation Module - pdf_realloc test case
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
#include <stdio.h>
#include <string.h>
#include <pdf.h>
#include <check.h>
#include <pdf-test-common.h>
/*
 * Test: pdf_realloc_001
 * Description:
 *   Get more memory.
 * Success conditions:
 *   1. The call should not produce an error.
 *   2. The previous contents of the buffer should still be there.
 */
START_TEST (pdf_realloc_001)
{
#define PDF_REALLOC_001_STRING "0123456789"
  char *data;

  /* Allocate some memory */
  data = pdf_alloc (strlen(PDF_REALLOC_001_STRING) + 1);
  fail_if (data == NULL);

  /* Set the contents of the memory */
  strcpy (data, PDF_REALLOC_001_STRING);

  /* Get more memory */
  data = pdf_realloc (data,
                      strlen(PDF_REALLOC_001_STRING) * 2);
  fail_if (data == NULL);

  /* Check for the contents of the buffer */
  fail_if (strncmp (data,
                    PDF_REALLOC_001_STRING,
                    strlen (PDF_REALLOC_001_STRING)));
  pdf_dealloc (data);
}
END_TEST

/*
 * Test: pdf_realloc_002
 * Description:
 *   Reduce the size of a memory buffer.
 * Success conditions:
 *   1. The call should not produce an error.
 *   2. The truncated previous contents of the buffer should
 *      still be there.
 */
START_TEST (pdf_realloc_002)
{
#define PDF_REALLOC_001_STRING "0123456789"
  char *data;

  /* Allocate some memory */
  data = pdf_alloc (strlen(PDF_REALLOC_001_STRING) + 1);
  fail_if (data == NULL);

  /* Set the contents of the memory */
  strcpy (data, PDF_REALLOC_001_STRING);

  /* Shrink the buffer */
  data = pdf_realloc (data,
                      strlen(PDF_REALLOC_001_STRING) - 1);
  fail_if (data == NULL);

  /* Check for the contents of the buffer */
  fail_if (strncmp (data,
                    PDF_REALLOC_001_STRING,
                    strlen (PDF_REALLOC_001_STRING) - 1));
  pdf_dealloc (data);
}
END_TEST

/*
 * Test case creation function
 */
TCase *
test_pdf_realloc (void)
{
  TCase *tc;

  tc = tcase_create ("pdf_realloc");
  tcase_add_test (tc, pdf_realloc_001);
  tcase_add_checked_fixture (tc,
                             pdf_test_setup,
                             pdf_test_teardown);
  return tc;
}

/* End of pdf-realloc.c */
