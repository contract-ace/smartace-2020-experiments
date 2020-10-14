; ModuleID = 'harness'
source_filename = "harness"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"

@0 = private constant [1 x i64] [i64 736553867421095286]
@1 = private global i32 0
@2 = private constant [1 x i64] zeroinitializer
@3 = private global i32 0
@4 = private constant [1 x i8] c"\03"
@5 = private global i32 0
@6 = private constant [1 x i8] c"\03"
@7 = private global i32 0
@8 = private constant [1 x i64] [i64 8406096]
@9 = private global i32 0
@10 = private constant [1 x i8] c"\01"
@11 = private global i32 0
@12 = private constant [1 x i8] zeroinitializer
@13 = private global i32 0
@14 = private constant [1 x i64] [i64 8407028]
@15 = private global i32 0
@16 = private constant [1 x i64] zeroinitializer
@17 = private global i32 0
@18 = private constant [1 x i8] c"\01"
@19 = private global i32 0
@20 = private constant [1 x i64] [i64 562949950829312]
@21 = private global i32 0
@22 = private constant [3 x i64] [i64 8, i64 8, i64 8]
@23 = private global i32 0
@24 = private constant [1 x i8] c"\01"
@25 = private global i32 0
@26 = private constant [1 x i64] [i64 2253907763461689]
@27 = private global i32 0
@28 = private constant [1 x i64] [i64 6667821023506756696]
@29 = private global i32 0
@30 = private constant [1 x i64] [i64 8459695217627804524]
@31 = private global i32 0
@32 = private constant [1 x i64] [i64 -6254843495177338149]
@33 = private global i32 0
@34 = private constant [1 x i64] [i64 562949953421313]
@35 = private global i32 0
@36 = private constant [1 x i64] [i64 8348745914603506594]
@37 = private global i32 0
@38 = private constant [1 x i64] [i64 3338418544497115547]
@39 = private global i32 0

define i64 @sea_nd_8() {
entry:
  %0 = load i32, i32* @1
  %1 = add i32 %0, 1
  store i32 %1, i32* @1
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @0, i32 0, i32 0), i32 1)
  ret i64 %2
}

declare i64 @__seahorn_get_value_i64(i32, i64*, i32)

define i64 @sea_nd_11() {
entry:
  %0 = load i32, i32* @3
  %1 = add i32 %0, 1
  store i32 %1, i32* @3
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @2, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i8 @sea_nd_20() {
entry:
  %0 = load i32, i32* @5
  %1 = add i32 %0, 1
  store i32 %1, i32* @5
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @4, i32 0, i32 0), i32 1)
  ret i8 %2
}

declare i8 @__seahorn_get_value_i8(i32, i8*, i32)

define i8 @sea_nd_35() {
entry:
  %0 = load i32, i32* @7
  %1 = add i32 %0, 1
  store i32 %1, i32* @7
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @6, i32 0, i32 0), i32 1)
  ret i8 %2
}

define i64 @sea_nd_12() {
entry:
  %0 = load i32, i32* @9
  %1 = add i32 %0, 1
  store i32 %1, i32* @9
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @8, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i8 @sea_nd_38() {
entry:
  %0 = load i32, i32* @11
  %1 = add i32 %0, 1
  store i32 %1, i32* @11
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @10, i32 0, i32 0), i32 1)
  ret i8 %2
}

define i8 @sea_nd_34() {
entry:
  %0 = load i32, i32* @13
  %1 = add i32 %0, 1
  store i32 %1, i32* @13
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @12, i32 0, i32 0), i32 1)
  ret i8 %2
}

define i64 @sea_nd_10() {
entry:
  %0 = load i32, i32* @15
  %1 = add i32 %0, 1
  store i32 %1, i32* @15
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @14, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_9() {
entry:
  %0 = load i32, i32* @17
  %1 = add i32 %0, 1
  store i32 %1, i32* @17
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @16, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i8 @sea_nd_39() {
entry:
  %0 = load i32, i32* @19
  %1 = add i32 %0, 1
  store i32 %1, i32* @19
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @18, i32 0, i32 0), i32 1)
  ret i8 %2
}

define i64 @sea_nd_30() {
entry:
  %0 = load i32, i32* @21
  %1 = add i32 %0, 1
  store i32 %1, i32* @21
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @20, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @verifier.nondet.sym.bound() {
entry:
  %0 = load i32, i32* @23
  %1 = add i32 %0, 1
  store i32 %1, i32* @23
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([3 x i64], [3 x i64]* @22, i32 0, i32 0), i32 3)
  ret i64 %2
}

define i8 @sea_nd_31() {
entry:
  %0 = load i32, i32* @25
  %1 = add i32 %0, 1
  store i32 %1, i32* @25
  %2 = call i8 @__seahorn_get_value_i8(i32 %0, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @24, i32 0, i32 0), i32 1)
  ret i8 %2
}

define i64 @sea_nd_7() {
entry:
  %0 = load i32, i32* @27
  %1 = add i32 %0, 1
  store i32 %1, i32* @27
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @26, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_13() {
entry:
  %0 = load i32, i32* @29
  %1 = add i32 %0, 1
  store i32 %1, i32* @29
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @28, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_5() {
entry:
  %0 = load i32, i32* @31
  %1 = add i32 %0, 1
  store i32 %1, i32* @31
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @30, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_36() {
entry:
  %0 = load i32, i32* @33
  %1 = add i32 %0, 1
  store i32 %1, i32* @33
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @32, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_37() {
entry:
  %0 = load i32, i32* @35
  %1 = add i32 %0, 1
  store i32 %1, i32* @35
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @34, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_6() {
entry:
  %0 = load i32, i32* @37
  %1 = add i32 %0, 1
  store i32 %1, i32* @37
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @36, i32 0, i32 0), i32 1)
  ret i64 %2
}

define i64 @sea_nd_29() {
entry:
  %0 = load i32, i32* @39
  %1 = add i32 %0, 1
  store i32 %1, i32* @39
  %2 = call i64 @__seahorn_get_value_i64(i32 %0, i64* getelementptr inbounds ([1 x i64], [1 x i64]* @38, i32 0, i32 0), i32 1)
  ret i64 %2
}

; Function Attrs: noinline
declare i8* @__emv(i8*) #0

define void @__seahorn_mem_init_routine() {
entry:
  call void @__seahorn_mem_alloc(i8* null, i8* null, i64 0, i64 8)
  ret void
}

declare void @__seahorn_mem_alloc(i8*, i8*, i64, i64)

declare void @__seahorn_mem_init(i8*, i64, i64)

attributes #0 = { noinline }
