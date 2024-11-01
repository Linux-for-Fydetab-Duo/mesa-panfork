/*
 * Copyright 2020 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
#include "qmd.h"
#include "clc3c0qmd.h"

#define NVC3C0_QMDV02_02_VAL(a...) NVQMD_VAL(NVC3C0, QMDV02_02, ##a)
#define NVC3C0_QMDV02_02_DEF(a...) NVQMD_DEF(NVC3C0, QMDV02_02, ##a)
#define NVC3C0_QMDV02_02_IDX(a...) NVQMD_IDX(NVC3C0, QMDV02_02, ##a)

void
NVC3C0QmdDump_V02_02(uint32_t *qmd)
{
   NVC3C0_QMDV02_02_VAL(qmd, OUTER_PUT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, OUTER_OVERFLOW, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, OUTER_GET, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, OUTER_STICKY_OVERFLOW, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, INNER_GET, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, INNER_OVERFLOW, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, INNER_PUT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, INNER_STICKY_OVERFLOW, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_GROUP_ID, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SM_GLOBAL_CACHING_ENABLE, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RUN_CTA_IN_ONE_SM_PARTITION, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, IS_QUEUE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, SEMAPHORE_RELEASE_ENABLE0, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, SEMAPHORE_RELEASE_ENABLE1, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, REQUIRE_SCHEDULING_PCAS, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, DEPENDENT_QMD_SCHEDULE_ENABLE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, DEPENDENT_QMD_TYPE, QUEUE, GRID);
   NVC3C0_QMDV02_02_DEF(qmd, DEPENDENT_QMD_FIELD_COPY, FALSE, TRUE);
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_B, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CIRCULAR_QUEUE_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_C, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_TEXTURE_HEADER_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_TEXTURE_SAMPLER_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_TEXTURE_DATA_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_SHADER_DATA_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_INSTRUCTION_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, INVALIDATE_SHADER_CONSTANT_CACHE, FALSE, TRUE);
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_WIDTH_RESUME, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_HEIGHT_RESUME, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_DEPTH_RESUME, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, PROGRAM_OFFSET, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CIRCULAR_QUEUE_ADDR_LOWER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CIRCULAR_QUEUE_ADDR_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_D, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CIRCULAR_QUEUE_ENTRY_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CWD_REFERENCE_COUNT_ID, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CWD_REFERENCE_COUNT_DELTA_MINUS_ONE, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE_MEMBAR_TYPE, FE_NONE, FE_SYSMEMBAR);
   NVC3C0_QMDV02_02_DEF(qmd, CWD_REFERENCE_COUNT_INCR_ENABLE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, CWD_MEMBAR_TYPE, L1_NONE, L1_SYSMEMBAR, L1_MEMBAR);
   NVC3C0_QMDV02_02_DEF(qmd, SEQUENTIALLY_RUN_CTAS, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, CWD_REFERENCE_COUNT_DECR_ENABLE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, API_VISIBLE_CALL_LIMIT, _32, NO_CHECK);
   NVC3C0_QMDV02_02_DEF(qmd, SAMPLER_INDEX, INDEPENDENTLY, VIA_HEADER_INDEX);
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_WIDTH, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_HEIGHT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED13A, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_RASTER_DEPTH, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED14A, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, DEPENDENT_QMD_POINTER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QUEUE_ENTRIES_PER_CTA_MINUS_ONE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, COALESCE_WAITING_PERIOD, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SHARED_MEMORY_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, MIN_SM_CONFIG_SHARED_MEM_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, MAX_SM_CONFIG_SHARED_MEM_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_VERSION, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_MAJOR_VERSION, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_H, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_THREAD_DIMENSION0, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_THREAD_DIMENSION1, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, CTA_THREAD_DIMENSION2, "0x%x");
   for (int i = 0; i < 8; i++)
      NVC3C0_QMDV02_02_IDX(qmd, CONSTANT_BUFFER_VALID, i, FALSE, TRUE);
   NVC3C0_QMDV02_02_VAL(qmd, REGISTER_COUNT_V, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, TARGET_SM_CONFIG_SHARED_MEM_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, FREE_CTA_SLOTS_EMPTY_SM, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SM_DISABLE_MASK_LOWER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SM_DISABLE_MASK_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE0_ADDRESS_LOWER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE0_ADDRESS_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_J, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE0_REDUCTION_OP, RED_ADD,
                                                    RED_MIN,
                                                    RED_MAX,
                                                    RED_INC,
                                                    RED_DEC,
                                                    RED_AND,
                                                    RED_OR,
                                                    RED_XOR);
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_K, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE0_REDUCTION_FORMAT, UNSIGNED_32, SIGNED_32);
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE0_REDUCTION_ENABLE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE0_STRUCTURE_SIZE, FOUR_WORDS, ONE_WORD);
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE0_PAYLOAD, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE1_ADDRESS_LOWER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE1_ADDRESS_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_L, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE1_REDUCTION_OP, RED_ADD,
                                                    RED_MIN,
                                                    RED_MAX,
                                                    RED_INC,
                                                    RED_DEC,
                                                    RED_AND,
                                                    RED_OR,
                                                    RED_XOR);
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_M, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE1_REDUCTION_FORMAT, UNSIGNED_32, SIGNED_32);
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE1_REDUCTION_ENABLE, FALSE, TRUE);
   NVC3C0_QMDV02_02_DEF(qmd, RELEASE1_STRUCTURE_SIZE, FOUR_WORDS, ONE_WORD);
   NVC3C0_QMDV02_02_VAL(qmd, RELEASE1_PAYLOAD, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SHADER_LOCAL_MEMORY_LOW_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_N, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, BARRIER_COUNT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SHADER_LOCAL_MEMORY_HIGH_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, REGISTER_COUNT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SHADER_LOCAL_MEMORY_CRS_SIZE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, SASS_VERSION, "0x%x");
   for (int i = 0; i < 8; i++) {
      NVC3C0_QMDV02_02_VAL(qmd, CONSTANT_BUFFER_ADDR_LOWER, i, "0x%x");
      NVC3C0_QMDV02_02_VAL(qmd, CONSTANT_BUFFER_ADDR_UPPER, i, "0x%x");
      NVC3C0_QMDV02_02_VAL(qmd, CONSTANT_BUFFER_RESERVED_ADDR, i, "0x%x");
      NVC3C0_QMDV02_02_IDX(qmd, CONSTANT_BUFFER_INVALIDATE, i, FALSE, TRUE);
      NVC3C0_QMDV02_02_VAL(qmd, CONSTANT_BUFFER_SIZE_SHIFTED4, i, "0x%x");
   }
   NVC3C0_QMDV02_02_VAL(qmd, PROGRAM_ADDRESS_LOWER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, PROGRAM_ADDRESS_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_S, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_INNER_GET, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_REQUIRE_SCHEDULING_PCAS, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_INNER_PUT, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_SCG_TYPE, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_SPAN_LIST_HEAD_INDEX, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_RESERVED_Q, "0x%x");
   NVC3C0_QMDV02_02_DEF(qmd, HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID, FALSE, TRUE);
   NVC3C0_QMDV02_02_VAL(qmd, HW_ONLY_SKED_NEXT_QMD_POINTER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_G, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_H, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_I, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_J, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_K, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_L, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_M, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, QMD_SPARE_N, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, DEBUG_ID_UPPER, "0x%x");
   NVC3C0_QMDV02_02_VAL(qmd, DEBUG_ID_LOWER, "0x%x");
}
