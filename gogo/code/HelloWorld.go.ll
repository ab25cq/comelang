; ModuleID = 'code/HelloWorld.go'
source_filename = "code/HelloWorld.go"

define i32 @fun() {
entry:
  ret i32 1
}

define i1 @fun2() {
entry:
  ret i1 true
}

define i32 @fun3(i1 %0) {
entry:
  %c = alloca i32
  %b = alloca i32
  %a = alloca i1
  store i1 %0, i1* %a
  store i32 123, i32* %b
  store i32 234, i32* %b
  store i32 345, i32* %c
  %b1 = load i32, i32* %b
  ret i32 %b1
}

define i32 @main() {
entry:
  %c7 = alloca i32
  %b6 = alloca i32
  %c5 = alloca i32
  %b4 = alloca i32
  %c = alloca i32
  %b = alloca i32
  %a = alloca i1
  %fun_result = call i32 @fun()
  %fun_result1 = call i1 @fun2()
  store i1 true, i1* %a
  %a2 = load i1, i1* %a
  br i1 %a2, label %cond_jump_then, label %cond_jump_elif0

cond_jump_then:                                   ; preds = %entry
  store i32 123, i32* %b
  store i32 123, i32* %c
  br label %cond_end

cond_jump_elif0:                                  ; preds = %entry
  %a3 = load i1, i1* %a
  br i1 %a3, label %cond_jump_elif_then0, label %cond_else_block

cond_jump_elif_then0:                             ; preds = %cond_jump_elif0
  store i32 1, i32* %b4
  store i32 1, i32* %c5
  br label %cond_end

cond_else_block:                                  ; preds = %cond_jump_elif0
  store i32 234, i32* %b6
  store i32 234, i32* %c7
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_jump_elif_then0, %cond_jump_then
  ret i32 0
}
