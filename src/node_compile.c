#include "common.h"

BOOL compile(unsigned int node, sCompileInfo* info)
{
    if(gNCHeader) {
        return TRUE;
    }
    if(node == 0) {
        return TRUE;
    }

    if(gNCDebug && !info->in_generics_function && !info->in_inline_function && !info->in_lambda_function && !info->empty_function && !info->in_automatically_created_function) {
        setCurrentDebugLocation(info->sline, info);
    }
    
    switch(gNodes[node].mNodeType) {
        case kNodeTypeMacro:
            if(!compile_macro(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeVaArg:
            if(!compile_va_arg(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeFunction:
            if(!compile_function(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeSName:
            if(!compile_sname(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeSLine:
            if(!compile_sline(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeCallerSName:
            if(!compile_caller_sname(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeCallerSLine:
            if(!compile_caller_sline(node, info)) {
                return FALSE;
            }
            break;


        case kNodeTypeExternalFunction:
            if(!compile_external_function(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeDupeFunction:
            if(!compile_dupe_function(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeStruct:
            if(!compile_struct(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeIntValue:
            if(!compile_int_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeFloatValue:
            if(!compile_float_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeDoubleValue:
            if(!compile_double_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeUIntValue:
            if(!compile_uint_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeAdd:
            if(!compile_add(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeSub:
            if(!compile_sub(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeMult:
            if(!compile_mult(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeDiv:
            if(!compile_div(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeMod:
            if(!compile_mod(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeEquals:
            if(!compile_equals(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeNotEquals:
            if(!compile_not_equals(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeUnwrap:
            if(!compile_unwrap(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeEquals2:
            if(!compile_equals2(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeNotEquals2:
            if(!compile_not_equals2(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeCString:
            if(!compile_c_string_value(node, info)) 
            {
                return FALSE;
            }
            break;

        case kNodeTypeWCString:
            if(!compile_wc_string_value(node, info)) 
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeRegex:
            if(!compile_regex_value(node, info)) 
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeMap:
            if(!compile_map_value(node, info)) 
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeList:
            if(!compile_list_value(node, info)) 
            {
                return FALSE;
            }
            break;


        case kNodeTypeStoreVariable:
            if(!compile_store_variable(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeStoreVariableMultiple:
            if(!compile_store_variable_multiple(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeDefineVariable:
            if(!compile_define_variable(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeFunctionCall:
            if(!compile_function_call(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeComeFunctionCall:
            if(!compile_come_function_call(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeJoin:
            if(!compile_join(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLoadVariable:
            if(!compile_load_variable(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeIf:
            if(!compile_if_expression(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeGuard:
            if(!compile_guard_expression(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeObject:
            if(!compile_object(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeStackObject:
            if(!compile_stack_object(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeStoreField:
            if(!compile_store_field(node, info)) {
                return FALSE;
            }
            break;
            
        case kNodeTypeStoreFieldOfProtocol:
            if(!compile_store_field_of_protocol(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLoadField:
            if(!compile_load_field(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeWhile:
            if(!compile_while_expression(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeGteq:
            if(!compile_gteq(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLeeq:
            if(!compile_leeq(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeGt:
            if(!compile_gt(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLe:
            if(!compile_le(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLogicalDenial:
            if(!compile_logical_denial(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeTrue:
            if(!compile_true(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeFalse:
            if(!compile_false(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeAndAnd:
            if(!compile_and_and(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeOrOr:
            if(!compile_or_or(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeFor:
            if(!compile_for_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeLambdaCall:
            if(!compile_lambda_call(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeDerefference:
            if(!compile_derefference(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeRefference:
            if(!compile_reffernce(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeRefferenceLoadField:
            if(!compile_reffernce_load_field(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeNull:
            if(!compile_null(node, info))
            { 
                return FALSE;
            }
            break;

        case kNodeTypeClone:
            if(!compile_clone(node, info))
            { 
                return FALSE;
            }
            break;
            
        case kNodeTypeIsHeap:
            if(!compile_is_heap(node, info))
            { 
                return FALSE;
            }
            break;
            
        case kNodeTypeIsGCHeap:
            if(!compile_is_gc_heap(node, info))
            { 
                return FALSE;
            }
            break;

        case kNodeTypeLoadElement:
            if(!compile_load_element(node, info))
            { 
                return FALSE;
            }
            break;

        case kNodeTypeStoreElement:
            if(!compile_store_element(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeChar:
            if(!compile_char_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLChar:
            if(!compile_wchar_value(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeCast:
            if(!compile_cast(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLoadChannelElement:
            if(!compile_load_channel_element(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeReadChannel:
            if(!compile_read_channel(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeWriteChannel:
            if(!compile_write_channel(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeGenericsFunction:
            if(!compile_generics_function(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeInlineFunction:
            if(!compile_inline_function(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeTypeDef:
            if(!compile_typedef(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeUnion:
            if(!compile_union(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeLeftShift:
            if(!compile_left_shift(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeRightShift:
            if(!compile_right_shift(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeAnd:
            if(!compile_and(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeXor:
            if(!compile_xor(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeOr:
            if(!compile_or(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeReturn:
            if(!compile_return(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeSizeOf:
            if(!compile_sizeof(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeNodes:
            if(!compile_nodes(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeLoadFunction:
            if(!compile_load_function(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeArrayWithInitialization:
            if(!compile_array_initializer(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeNormalBlock:
            if(!compile_normal_block(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeSelect:
            if(!compile_select(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypePSelect:
            if(!compile_pselect(node, info)) {
                return FALSE;
            }
            break;


        case kNodeTypeStructInitializer:
            if(!compile_struct_initializer(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeSwitch:
            if(!compile_switch_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeBreak:
            if(!compile_break_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeContinue:
            if(!compile_continue_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeDoWhile:
            if(!compile_do_while_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeCase:
            if(!compile_case_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeLabel:
            if(!compile_label_expression(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeCreateLabel:
            if(!compile_create_label(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeNullValue:
            if(!compile_null_value(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeNoMove:
            if(!compile_nomove(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeNullable:
            if(!compile_nullable(node, info))
            {
                return FALSE;
            }
            break;
            
        case kNodeTypeNoNullable:
            if(!compile_nonullable(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeGoto:
            if(!compile_goto_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeSizeOfExpression:
            if(!compile_sizeof_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeConditional:
            if(!compile_conditional(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeAlignOf:
            if(!compile_alignof(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeAlignOfExpression:
            if(!compile_alignof_expression(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeLongValue:
            if(!compile_long_value(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeULongValue:
            if(!compile_ulong_value(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeComplement:
            if(!compile_complement(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeStoreAddress:
            if(!compile_store_address(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeLoadAddressValue:
            if(!compile_load_address_value(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeStoreDerefference:
            if(!compile_store_derefference(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypePlusPlus:
            if(!compile_plus_plus(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeMinusMinus:
            if(!compile_minus_minus(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualPlus:
            if(!compile_equal_plus(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualMinus:
            if(!compile_equal_minus(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualMult:
            if(!compile_equal_mult(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualDiv:
            if(!compile_equal_div(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualMod:
            if(!compile_equal_mod(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualLShift:
            if(!compile_equal_lshift(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualRShift:
            if(!compile_equal_rshift(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualAnd:
            if(!compile_equal_and(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualXor:
            if(!compile_equal_xor(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeEqualOr:
            if(!compile_equal_or(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeComma:
            if(!compile_comma(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeFunName:
            if(!compile_func_name(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeStack:
            if(!compile_stack(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeDefer:
            if(!compile_defer(node, info)) {
                return FALSE;
            }
            break;

        case kNodeTypeMethodBlock:
            if(!compile_method_block(node, info)) {
                return FALSE;
            }
            break;


        case kNodeTypeBorrow:
            if(!compile_borrow(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeDummyHeap:
            if(!compile_dummy_heap(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeManaged:
            if(!compile_managed(node, info))
            {
                return FALSE;
            }
            break;

        case kNodeTypeDelete:
            if(!compile_delete(node, info))
            {
                return FALSE;
            }
            break;
    }

    return node;
}
