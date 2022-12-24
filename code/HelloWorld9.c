#include <neo-c.h>

int main()
{
    xassert("char_match test", "ABC".match(/A/));
    xassert("char_index test", "ABC".index("B", -1) == 1);
    xassert("char_rindex test", "ABCABC".rindex("B", -1) == 4);
    xassert("char_index_regex", "ABC".index_regex(/B/, -1) == 1);
    xassert("char_rindex_regex", "ABCABC".rindex_regex(/B/, -1) == 4);

    string str = string("ABC");

    str.replace(1, 'C');

    xassert("char_replace", strcmp(str, "ACC") == 0);
    xassert("char_multiply", strcmp(string("ABC").multiply(2), "ABCABC") == 0);

    xassert("char_sub", strcmp("ABC".sub(/B/, "C"), "ACC") == 0);

    xassert("char_sub_count", strcmp("ABCABCABC".sub_count(/B/g, "C", 2), "ACCACCABC") == 0);

    auto li = "ABC".scan(/./);

puts("AAA");
li.each {
printf("%s", it);
}
    xassert("char_scan", strcmp(li.item(0, null), "A") == 0 && strcmp(li.item(1, null), "B") == 0 && strcmp(li.item(2, null), "C") == 0);

    auto li2 = "A,B,C".split(/,/);

    xassert("char_split", strcmp(li2.item(0, null), "A") == 0 && strcmp(li2.item(1, null), "B") == 0 && strcmp(li2.item(2, null), "C") == 0);

    auto li3 = "A,B,C".split_char(',');

    xassert("char_split_char", strcmp(li3.item(0, null), "A") == 0 && strcmp(li3.item(1, null), "B") == 0 && strcmp(li3.item(2, null), "C") == 0);
    
    auto li4 = "A,,B,,C".split_str(",,");

    xassert("char_split_str", strcmp(li4.item(0, null), "A") == 0 && strcmp(li4.item(1, null), "B") == 0 && strcmp(li4.item(2, null), "C") == 0);
    
    auto li5 = "A,,B,,C".split_maxsplit(/,,/, 1);

    xassert("char_split_maxsplit", strcmp(li5.item(0, null), "A") == 0 && strcmp(li5.item(1, null), "B,,C") == 0);

    xassert("char_delete", string("ABC").delete(0,1).equals("BC"));

    xassert("wchar_substring", wcscmp(wstring("ABC").substring(0,1), wstring("A")) == 0);
    
    auto li6 = "A,B,C".split_str(",");
    
    xassert("join", li6.join(" ").equals("A B C"));
    
    auto li7 = "A,B,C".split(/,/g);
    
    xassert("split test", li7.item(0, null).equals("A") && li6.item(1,null).equals("B") && li6.item(2, null).equals("C"));
    
    xassert("index_count test", "ABCABC".index_count("ABC", 2, -1) == 3);
    xassert("index_regex_count test", "ABCABC".index_regex_count(/ABC/g, 2, -1) == 3);
    xassert("rindex_count test", "ABCABC".rindex_count("ABC", 2, -1) == 0);
    xassert("rindex_regex_count test", "ABCABC".rindex_regex_count(/CBA/g, 2, -1) == 0);
    xassert("rindex_regex test", "ABCABC".rindex_regex(/CBA/, -1) == 5);
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 3));
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 4) == false);
    xassert("sub_count test", "ABCABCABC".sub_count(/ABC/g, "X", 2).equals("XXABC"));
    xassert("sub_block test", "ABCABCABC".sub_block(/ABC/g) { return string("X"); }.equals("XXX"));
    xassert("sub_block_count test", "ABCABCABC".sub_block_count(/ABC/g, 2) { return string("X"); }.equals("XXABC"));
    xassert("sub_block_count test2", "ABCABCABC".sub_block_count(/ABC/g, 2) { return it.substring(0,1); }.equals("AAABC"));
    xassert("scan_block test", "123 456 789".scan_block(/\d\d\d/g) { return it.substring(0, 1); }.join("").equals("147"));
    xassert("scan_block_count test", "123 456 789".scan_block_count(/\d\d\d/g, 2) { return it.substring(0, 1); }.join("").equals("14"));
    
    auto li8 = "ABC".scan(/./);
    
    xassert("scan test", li8.item(0, null).equals("A") && li8.item(1, null).equals("B") && li8.item(2, null).equals("C"));
    
    xassert("to_buffer test", "ABC".to_buffer().append_str("DEF").to_string().equals("ABCDEF"));
    xassert("split block test", "ABC,DEF,GHI".split_block(/,/) { return it.substring(0,1); }.join("").equals("ADG"));
    xassert("split block test", "ABC,DEF,GHI".split_block_count(/,/, 2) { return it.substring(0,1); }.join("").equals("AD"));
    xassert("regex test", "ABC".scan(/./).join("").equals("ABC"));
    
    xassert("regex equals test", /aaa/g.equals(/aaa/g));
    
    list<string>*% group_strings = new list<string>.initialize();
    
    int num_group_strings_in_regx = 0;
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+):/, group_strings, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test", group_strings.item(0, null).equals("id") && group_strings.item(1, null).equals("mail") && num_group_strings_in_regx == 1);
    
    list<string>*% group_strings2 = new list<string>.initialize();
    
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+): ([\w@.]+)/, group_strings2, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test2", group_strings2.item(0, null).equals("id") && group_strings2.item(1, null).equals("abc") && group_strings2.item(2, null).equals("mail") && group_strings2.item(3, null).equals("abc@icloud.com") && num_group_strings_in_regx == 2);

    return 0;
}
