#include <lib/sj-lib-common/common.h>

struct {
    int refcount;
    int size;
    int count;
    char data[1];
} sjg_string1 = { 1, 1, 0, ""};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string10 = { 1, 3, 2, " }"};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string11 = { 1, 3, 2, "[ "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string12 = { 1, 3, 2, " ]"};
struct {
    int refcount;
    int size;
    int count;
    char data[6];
} sjg_string13 = { 1, 6, 5, "\"abc\""};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string14 = { 1, 3, 2, "12"};
struct {
    int refcount;
    int size;
    int count;
    char data[13];
} sjg_string15 = { 1, 13, 12, "[\"abc\" , 12]"};
struct {
    int refcount;
    int size;
    int count;
    char data[4];
} sjg_string16 = { 1, 4, 3, "{ }"};
struct {
    int refcount;
    int size;
    int count;
    char data[20];
} sjg_string17 = { 1, 20, 19, "{ \n\n\"abc\" : \"foo\" }"};
struct {
    int refcount;
    int size;
    int count;
    char data[33];
} sjg_string18 = { 1, 33, 32, "{ \n\n\"abc\" : { \"foo\" : \"bar\" }  }"};
struct {
    int refcount;
    int size;
    int count;
    char data[301];
} sjg_string19 = { 1, 301, 300, "{\r\n    \"title\" : \"This is a title\",\r\n    \"parentalAdvisory\" : \"This is a parental advisory\",\r\n      \"hasAdultText\" : true,\r\n    \"strings\" : {\r\n        \"adult_17481\" : \"Adult Text\",\r\n        \"dp_product_info_energy_class\" : \"Energy Class Level\"\r\n    },\r\n    \"energyEfficiencyClass\" : \"Energy Class\"\r\n}"};
struct {
    int refcount;
    int size;
    int count;
    char data[14];
} sjg_string2 = { 1, 14, 13, "out of bounds"};
struct {
    int refcount;
    int size;
    int count;
    char data[370];
} sjg_string20 = { 1, 370, 369, "{\r\n    \"title\" : \"This is a title\",\r\n    \"parentalAdvisory\" : \"This is a parental advisory\",\r\n    \"formatList\" : [\r\n        \"Format 1\",\r\n        \"Format 2\"\r\n    ],\r\n    \"hasAdultText\" : true,\r\n    \"strings\" : {\r\n        \"adult_17481\" : \"Adult Text\",\r\n        \"dp_product_info_energy_class\" : \"Energy Class Level\"\r\n    },\r\n    \"energyEfficiencyClass\" : \"Energy Class\"\r\n}"};
struct {
    int refcount;
    int size;
    int count;
    char data[13];
} sjg_string3 = { 1, 13, 12, "list item : "};
struct {
    int refcount;
    int size;
    int count;
    char data[4];
} sjg_string4 = { 1, 4, 3, " : "};
struct {
    int refcount;
    int size;
    int count;
    char data[12];
} sjg_string5 = { 1, 12, 11, "Parse Error"};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string6 = { 1, 3, 2, "{ "};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string7 = { 1, 2, 1, "\""};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string8 = { 1, 5, 4, "\" : "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string9 = { 1, 3, 2, ", "};

struct {
    int refcount;
    int size;
    int count;
    char data[0];
} g_empty = { 1, 0, 0 };
#define sjs_hash_type_bool_typeId 15
#define sjs_log_typeId 20
#define sjs_array_char_typeId 23
#define sjs_string_typeId 21
#define sjs_array_value_typeId 45
#define sjs_hash_string_value_typeId 34
#define sjs_json_value_typeId 27
#define sjs_tuple2_i32_string_typeId 39
#define sjs_tuple2_i32_value_typeId 29
#define sjs_list_value_typeId 46
#define sjs_array_string_typeId 62
#define cb_value_string_typeId 79
#define cb_value_string_heap_typeId 79
#define sjs_lambda3_typeId 81
#define cb_value_string_heap_string_typeId 83
#define cb_value_string_heap_string_heap_typeId 83
#define sjs_list_string_typeId 61
#define cb_string_value_void_typeId 64
#define cb_string_value_void_heap_typeId 64
#define cb_string_value_string_typeId 60
#define cb_string_value_string_heap_typeId 60
#define sjs_lambda1_typeId 65
#define sjs_lambda2_typeId 72
#define cb_string_value_string_heap_string_typeId 74
#define cb_string_value_string_heap_string_heap_typeId 74

typedef struct td_sjs_hash_type_bool sjs_hash_type_bool;
typedef struct td_sjs_log sjs_log;
typedef struct td_sjs_array_char sjs_array_char;
typedef struct td_sjs_string sjs_string;
typedef struct td_sjs_array_value sjs_array_value;
typedef struct td_sjs_hash_string_value sjs_hash_string_value;
typedef struct td_sjs_json_value sjs_json_value;
typedef struct td_sjs_tuple2_i32_string sjs_tuple2_i32_string;
typedef struct td_sjs_tuple2_i32_value sjs_tuple2_i32_value;
typedef struct td_sjs_list_value sjs_list_value;
typedef struct td_sjs_array_string sjs_array_string;
typedef struct td_cb_value_string cb_value_string;
typedef struct td_cb_value_string_heap cb_value_string_heap;
typedef struct td_sjs_lambda3 sjs_lambda3;
typedef struct td_cb_value_string_heap_string cb_value_string_heap_string;
typedef struct td_cb_value_string_heap_string_heap cb_value_string_heap_string_heap;
typedef struct td_sjs_list_string sjs_list_string;
typedef struct td_cb_string_value_void cb_string_value_void;
typedef struct td_cb_string_value_void_heap cb_string_value_void_heap;
typedef struct td_cb_string_value_string cb_string_value_string;
typedef struct td_cb_string_value_string_heap cb_string_value_string_heap;
typedef struct td_sjs_lambda1 sjs_lambda1;
typedef struct td_sjs_lambda2 sjs_lambda2;
typedef struct td_cb_string_value_string_heap_string cb_string_value_string_heap_string;
typedef struct td_cb_string_value_string_heap_string_heap cb_string_value_string_heap_string_heap;

struct td_sjs_hash_type_bool {
    int _refCount;
    void* _hash;
};

struct td_sjs_log {
    int _refCount;
    int32_t minlevel;
    sjs_hash_type_bool traceincludes;
    sjs_hash_type_bool debugincludes;
    sjs_hash_type_bool infoincludes;
    sjs_hash_type_bool warnincludes;
    sjs_hash_type_bool errorincludes;
    sjs_hash_type_bool fatalincludes;
};

struct td_sjs_array_char {
    int _refCount;
    void* v;
};

struct td_sjs_string {
    int _refCount;
    int32_t offset;
    int32_t count;
    sjs_array_char data;
    bool _isnullterminated;
};

struct td_sjs_array_value {
    int _refCount;
    void* v;
};

struct td_sjs_hash_string_value {
    int _refCount;
    void* _hash;
};

struct td_sjs_json_value {
    int _refCount;
    sjs_string s;
    sjs_array_value a;
    sjs_hash_string_value h;
};

struct td_sjs_tuple2_i32_string {
    int _refCount;
    int32_t item1;
    sjs_string item2;
};

struct td_sjs_tuple2_i32_value {
    int _refCount;
    int32_t item1;
    sjs_json_value item2;
};

struct td_sjs_list_value {
    int _refCount;
    sjs_array_value arr;
};

struct td_sjs_array_string {
    int _refCount;
    void* v;
};

struct td_cb_value_string {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_json_value*, sjs_string* _return);
};

struct td_cb_value_string_heap {
    cb_value_string inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_lambda3 {
    int _refCount;
};

struct td_cb_value_string_heap_string {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_json_value*, sjs_string* _return);
    void (*_cb_heap)(sjs_object* _parent, sjs_json_value*, sjs_string** _return);
};

struct td_cb_value_string_heap_string_heap {
    cb_value_string_heap_string inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_list_string {
    int _refCount;
    sjs_array_string arr;
};

struct td_cb_string_value_void {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_string*, sjs_json_value*);
};

struct td_cb_string_value_void_heap {
    cb_string_value_void inner;
    void (*_destroy)(sjs_object*);
};

struct td_cb_string_value_string {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_string*, sjs_json_value*, sjs_string* _return);
};

struct td_cb_string_value_string_heap {
    cb_string_value_string inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_lambda1 {
    int _refCount;
    sjs_list_string* lambdaparam1;
    cb_string_value_string lambdaparam2;
    cb_string_value_string lambdaparam3;
};

struct td_sjs_lambda2 {
    int _refCount;
};

struct td_cb_string_value_string_heap_string {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_string*, sjs_json_value*, sjs_string* _return);
    void (*_cb_heap)(sjs_object* _parent, sjs_string*, sjs_json_value*, sjs_string** _return);
};

struct td_cb_string_value_string_heap_string_heap {
    cb_string_value_string_heap_string inner;
    void (*_destroy)(sjs_object*);
};

#ifndef type_bool_hash_typedef
#define type_bool_hash_typedef
KHASH_INIT_TYPEDEF(type_bool_hash_type, int32_t, bool)
#endif
#ifndef type_bool_hash_typedef
#define type_bool_hash_typedef
KHASH_INIT_TYPEDEF(type_bool_hash_type, int32_t, bool)
#endif
char* string_char(sjs_string* str);
#ifndef string_value_hash_typedef
#define string_value_hash_typedef
KHASH_INIT_TYPEDEF(string_value_hash_type, sjs_string, sjs_json_value)
#endif
#ifndef string_value_hash_typedef
#define string_value_hash_typedef
KHASH_INIT_TYPEDEF(string_value_hash_type, sjs_string, sjs_json_value)
#endif
int32_t g_loglevel_debug;
int32_t g_loglevel_error;
int32_t g_loglevel_fatal;
int32_t g_loglevel_info;
int32_t g_loglevel_trace;
int32_t g_loglevel_warn;

int32_t g_clocks_per_sec;
float g_f32_pi;
int32_t g_i32_maxvalue;
int32_t g_i32_minvalue;
sjs_log g_log = { -1 };
sjs_hash_type_bool g_log_excludeall = { -1 };
sjs_hash_type_bool g_log_includeall = { -1 };
uint32_t g_u32_maxvalue;
int32_t result1;
sjs_string sjt_call72 = { -1 };
sjs_string sjt_call73 = { -1 };
sjs_string sjt_call74 = { -1 };
sjs_string sjt_call75 = { -1 };
sjs_string sjt_call76 = { -1 };
sjs_string sjt_call77 = { -1 };
sjs_string sjt_call78 = { -1 };
sjs_string sjt_call79 = { -1 };
sjs_string* sjt_functionParam198 = 0;
sjs_string* sjt_functionParam199 = 0;
sjs_string* sjt_functionParam200 = 0;
sjs_string* sjt_functionParam201 = 0;
sjs_string* sjt_functionParam202 = 0;
sjs_string* sjt_functionParam203 = 0;
sjs_string* sjt_functionParam204 = 0;
sjs_string* sjt_functionParam205 = 0;
sjs_hash_type_bool sjt_value1 = { -1 };

void sjf_array_char(sjs_array_char* _this);
void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return);
void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return);
void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from);
void sjf_array_char_destroy(sjs_array_char* _this);
void sjf_array_char_getat(sjs_array_char* _parent, int32_t index, char* _return);
void sjf_array_char_getcount(sjs_array_char* _parent, int32_t* _return);
void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return);
void sjf_array_char_heap(sjs_array_char* _this);
void sjf_array_char_initat(sjs_array_char* _parent, int32_t index, char item);
void sjf_array_string(sjs_array_string* _this);
void sjf_array_string_asstring(sjs_array_string* _parent, sjs_string* sep, sjs_string* _return);
void sjf_array_string_asstring_heap(sjs_array_string* _parent, sjs_string* sep, sjs_string** _return);
void sjf_array_string_clone(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string* _return);
void sjf_array_string_clone_heap(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string** _return);
void sjf_array_string_copy(sjs_array_string* _this, sjs_array_string* _from);
void sjf_array_string_destroy(sjs_array_string* _this);
void sjf_array_string_getat(sjs_array_string* _parent, int32_t index, sjs_string* _return);
void sjf_array_string_getat_heap(sjs_array_string* _parent, int32_t index, sjs_string** _return);
void sjf_array_string_getcount(sjs_array_string* _parent, int32_t* _return);
void sjf_array_string_gettotalcount(sjs_array_string* _parent, int32_t* _return);
void sjf_array_string_heap(sjs_array_string* _this);
void sjf_array_string_initat(sjs_array_string* _parent, int32_t index, sjs_string* item);
void sjf_array_value(sjs_array_value* _this);
void sjf_array_value_clone(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value* _return);
void sjf_array_value_clone_heap(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value** _return);
void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from);
void sjf_array_value_destroy(sjs_array_value* _this);
void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return);
void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return);
void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return);
void sjf_array_value_gettotalcount(sjs_array_value* _parent, int32_t* _return);
void sjf_array_value_heap(sjs_array_value* _this);
void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item);
void sjf_array_value_map_string(sjs_array_value* _parent, cb_value_string cb, sjs_array_string* _return);
void sjf_array_value_map_string_heap(sjs_array_value* _parent, cb_value_string cb, sjs_array_string** _return);
void sjf_debug_writeline(sjs_string* data);
void sjf_halt(sjs_string* reason);
void sjf_hash_string_value(sjs_hash_string_value* _this);
void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key);
void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val);
void sjf_hash_string_value_asarray_string(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string* _return);
void sjf_hash_string_value_asarray_string_heap(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string** _return);
void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from);
void sjf_hash_string_value_destroy(sjs_hash_string_value* _this);
void sjf_hash_string_value_each(sjs_hash_string_value* _parent, cb_string_value_void cb);
void sjf_hash_string_value_heap(sjs_hash_string_value* _this);
void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val);
void sjf_hash_type_bool(sjs_hash_type_bool* _this);
void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key);
void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val);
void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from);
void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this);
void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this);
void sjf_i32_asstring(int32_t val, int32_t base, sjs_string* _return);
void sjf_i32_asstring_heap(int32_t val, int32_t base, sjs_string** _return);
void sjf_i32_max(int32_t a, int32_t b, int32_t* _return);
void sjf_json_parse(sjs_string* s, sjs_json_value* _return);
void sjf_json_parse_heap(sjs_string* s, sjs_json_value** _return);
void sjf_json_parse_number(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return);
void sjf_json_parse_number_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return);
void sjf_json_parse_string(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return);
void sjf_json_parse_string_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return);
void sjf_json_parse_value(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value* _return);
void sjf_json_parse_value_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value** _return);
void sjf_json_parse_whitespace(sjs_string* s, int32_t startindex, int32_t* _return);
void sjf_json_value(sjs_json_value* _this);
void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from);
void sjf_json_value_destroy(sjs_json_value* _this);
void sjf_json_value_heap(sjs_json_value* _this);
void sjf_json_value_render(sjs_json_value* _parent, sjs_string* _return);
void sjf_json_value_render_heap(sjs_json_value* _parent, sjs_string** _return);
void sjf_lambda1(sjs_lambda1* _this);
void sjf_lambda1_copy(sjs_lambda1* _this, sjs_lambda1* _from);
void sjf_lambda1_destroy(sjs_lambda1* _this);
void sjf_lambda1_heap(sjs_lambda1* _this);
void sjf_lambda1_invoke(sjs_lambda1* _parent, sjs_string* _1, sjs_json_value* _2);
void sjf_lambda2(sjs_lambda2* _this);
void sjf_lambda2_copy(sjs_lambda2* _this, sjs_lambda2* _from);
void sjf_lambda2_destroy(sjs_lambda2* _this);
void sjf_lambda2_heap(sjs_lambda2* _this);
void sjf_lambda2_invoke(sjs_lambda2* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string* _return);
void sjf_lambda2_invoke_heap(sjs_lambda2* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string** _return);
void sjf_lambda3(sjs_lambda3* _this);
void sjf_lambda3_copy(sjs_lambda3* _this, sjs_lambda3* _from);
void sjf_lambda3_destroy(sjs_lambda3* _this);
void sjf_lambda3_heap(sjs_lambda3* _this);
void sjf_lambda3_invoke(sjs_lambda3* _parent, sjs_json_value* _1, sjs_string* _return);
void sjf_lambda3_invoke_heap(sjs_lambda3* _parent, sjs_json_value* _1, sjs_string** _return);
void sjf_list_string(sjs_list_string* _this);
void sjf_list_string_add(sjs_list_string* _parent, sjs_string* item);
void sjf_list_string_copy(sjs_list_string* _this, sjs_list_string* _from);
void sjf_list_string_destroy(sjs_list_string* _this);
void sjf_list_string_heap(sjs_list_string* _this);
void sjf_list_value(sjs_list_value* _this);
void sjf_list_value_add(sjs_list_value* _parent, sjs_json_value* item);
void sjf_list_value_copy(sjs_list_value* _this, sjs_list_value* _from);
void sjf_list_value_destroy(sjs_list_value* _this);
void sjf_list_value_heap(sjs_list_value* _this);
void sjf_log(sjs_log* _this);
void sjf_log_copy(sjs_log* _this, sjs_log* _from);
void sjf_log_destroy(sjs_log* _this);
void sjf_log_heap(sjs_log* _this);
void sjf_string(sjs_string* _this);
void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return);
void sjf_string_add_heap(sjs_string* _parent, sjs_string* item, sjs_string** _return);
void sjf_string_asstring(sjs_string* _parent, sjs_string* _return);
void sjf_string_asstring_heap(sjs_string* _parent, sjs_string** _return);
void sjf_string_copy(sjs_string* _this, sjs_string* _from);
void sjf_string_destroy(sjs_string* _this);
void sjf_string_getat(sjs_string* _parent, int32_t index, char* _return);
void sjf_string_hash(sjs_string* _parent, uint32_t* _return);
void sjf_string_heap(sjs_string* _this);
void sjf_string_isequal(sjs_string* _parent, sjs_string* test, bool* _return);
void sjf_string_nullterminate(sjs_string* _parent);
void sjf_string_substr(sjs_string* _parent, int32_t o, int32_t c, sjs_string* _return);
void sjf_string_substr_heap(sjs_string* _parent, int32_t o, int32_t c, sjs_string** _return);
void sjf_test(sjs_string* s);
void sjf_tuple2_i32_string(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_string_copy(sjs_tuple2_i32_string* _this, sjs_tuple2_i32_string* _from);
void sjf_tuple2_i32_string_destroy(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_string_heap(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_value(sjs_tuple2_i32_value* _this);
void sjf_tuple2_i32_value_copy(sjs_tuple2_i32_value* _this, sjs_tuple2_i32_value* _from);
void sjf_tuple2_i32_value_destroy(sjs_tuple2_i32_value* _this);
void sjf_tuple2_i32_value_heap(sjs_tuple2_i32_value* _this);
void sjf_type_hash(int32_t val, uint32_t* _return);
void sjf_type_isequal(int32_t l, int32_t r, bool* _return);
void main_destroy(void);

#ifndef type_bool_hash_function
#define type_bool_hash_function
#if false
KHASH_INIT_FUNCTION_DEREF(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#else
KHASH_INIT_FUNCTION(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#endif
#endif
#ifndef type_bool_hash_function
#define type_bool_hash_function
#if false
KHASH_INIT_FUNCTION_DEREF(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#else
KHASH_INIT_FUNCTION(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#endif
#endif
char* string_char(sjs_string* str) {
    sjf_string_nullterminate(str);
    return ((sjs_array*)str->data.v)->data + str->offset;
}
#include <lib/sj-lib-common/common.cpp>
#ifndef string_value_hash_function
#define string_value_hash_function
#if true
KHASH_INIT_FUNCTION_DEREF(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#else
KHASH_INIT_FUNCTION(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#endif
#endif
#ifndef string_value_hash_function
#define string_value_hash_function
#if true
KHASH_INIT_FUNCTION_DEREF(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#else
KHASH_INIT_FUNCTION(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#endif
#endif
void sjf_array_char(sjs_array_char* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(char), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    char* p = (char*)arr->data + offset;
    char* newp = (char*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if true
    memcpy(newp, p, sizeof(char) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i] = p[i];
;
    }
    #endif
    _return->_refCount = 1;
    _return->v = newv;
    sjf_array_char(_return);
}

void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(char), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    char* p = (char*)arr->data + offset;
    char* newp = (char*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if true
    memcpy(newp, p, sizeof(char) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i] = p[i];
;
    }
    #endif
    (*_return) = (sjs_array_char*)malloc(sizeof(sjs_array_char));
    (*_return)->_refCount = 1;
    (*_return)->v = newv;
    sjf_array_char_heap((*_return));
}

void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from) {
    _this->v = _from->v;
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_char_destroy(sjs_array_char* _this) {
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount--;
    if (arr->refcount == 0) {
        #if !true && !false
        char* p = (char*)arr->data;
        for (int i = 0; i < arr->count; i++) {
            ;
        }
        #endif
        free(arr);
    }
}

void sjf_array_char_getat(sjs_array_char* _parent, int32_t index, char* _return) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index >= arr->count || index < 0) {
        halt("getAt: out of bounds\n");
    }
    char* p = (char*)arr->data;
    (*_return) = p[index];
return;;       
}

void sjf_array_char_getcount(sjs_array_char* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_char_heap(sjs_array_char* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_char_initat(sjs_array_char* _parent, int32_t index, char item) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index != arr->count) {
        halt("initAt: can only initialize last element\n");     
    }
    if (index >= arr->size || index < 0) {
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
    }
    char* p = (char*)arr->data;
    p[index] = item;
;
    arr->count = index + 1;
}

void sjf_array_string(sjs_array_string* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_string_asstring(sjs_array_string* _parent, sjs_string* sep, sjs_string* _return) {
    int32_t i;
    sjs_string result = { -1 };
    int32_t sjt_forEnd5;
    int32_t sjt_forStart5;

    result._refCount = 1;
    result.offset = 0;
    result.count = 0;
    result.data._refCount = 1;
    result.data.v = &sjg_string1;
    sjf_array_char(&result.data);
    result._isnullterminated = false;
    sjf_string(&result);
    sjt_forStart5 = 0;
    sjf_array_string_getcount(_parent, &sjt_forEnd5);
    i = sjt_forStart5;
    while (i < sjt_forEnd5) {
        sjs_string sjt_call27 = { -1 };
        sjs_string sjt_call28 = { -1 };
        sjs_string sjt_funcold17 = { -1 };
        sjs_string sjt_funcold18 = { -1 };
        sjs_string* sjt_functionParam155 = 0;
        int32_t sjt_functionParam156;
        sjs_string* sjt_parent73 = 0;
        sjs_string* sjt_parent74 = 0;

        if (i != 0) {
            sjs_string* sjt_functionParam154 = 0;
            sjs_string* sjt_parent72 = 0;

            sjt_funcold17._refCount = 1;
            sjf_string_copy(&sjt_funcold17, &result);
            sjt_parent72 = &result;
            sjt_functionParam154 = sep;
            sjf_string_add(sjt_parent72, sjt_functionParam154, &sjt_funcold17);
            if (result._refCount == 1) { sjf_string_destroy(&result); }
;
            sjf_string_copy(&result, &sjt_funcold17);
        }

        sjt_funcold18._refCount = 1;
        sjf_string_copy(&sjt_funcold18, &result);
        sjt_parent73 = &result;
        sjt_functionParam156 = i;
        sjf_array_string_getat(_parent, sjt_functionParam156, &sjt_call28);
        sjt_parent74 = &sjt_call28;
        sjf_string_asstring(sjt_parent74, &sjt_call27);
        sjt_functionParam155 = &sjt_call27;
        sjf_string_add(sjt_parent73, sjt_functionParam155, &sjt_funcold18);
        if (result._refCount == 1) { sjf_string_destroy(&result); }
;
        sjf_string_copy(&result, &sjt_funcold18);
        i++;

        if (sjt_call27._refCount == 1) { sjf_string_destroy(&sjt_call27); }
;
        if (sjt_call28._refCount == 1) { sjf_string_destroy(&sjt_call28); }
;
        if (sjt_funcold17._refCount == 1) { sjf_string_destroy(&sjt_funcold17); }
;
        if (sjt_funcold18._refCount == 1) { sjf_string_destroy(&sjt_funcold18); }
;
    }

    _return->_refCount = 1;
    sjf_string_copy(_return, &result);

    if (result._refCount == 1) { sjf_string_destroy(&result); }
;
}

void sjf_array_string_asstring_heap(sjs_array_string* _parent, sjs_string* sep, sjs_string** _return) {
    int32_t i;
    sjs_string result = { -1 };
    int32_t sjt_forEnd6;
    int32_t sjt_forStart6;

    result._refCount = 1;
    result.offset = 0;
    result.count = 0;
    result.data._refCount = 1;
    result.data.v = &sjg_string1;
    sjf_array_char(&result.data);
    result._isnullterminated = false;
    sjf_string(&result);
    sjt_forStart6 = 0;
    sjf_array_string_getcount(_parent, &sjt_forEnd6);
    i = sjt_forStart6;
    while (i < sjt_forEnd6) {
        sjs_string sjt_call29 = { -1 };
        sjs_string sjt_call30 = { -1 };
        sjs_string sjt_funcold19 = { -1 };
        sjs_string sjt_funcold20 = { -1 };
        sjs_string* sjt_functionParam158 = 0;
        int32_t sjt_functionParam159;
        sjs_string* sjt_parent76 = 0;
        sjs_string* sjt_parent77 = 0;

        if (i != 0) {
            sjs_string* sjt_functionParam157 = 0;
            sjs_string* sjt_parent75 = 0;

            sjt_funcold19._refCount = 1;
            sjf_string_copy(&sjt_funcold19, &result);
            sjt_parent75 = &result;
            sjt_functionParam157 = sep;
            sjf_string_add(sjt_parent75, sjt_functionParam157, &sjt_funcold19);
            if (result._refCount == 1) { sjf_string_destroy(&result); }
;
            sjf_string_copy(&result, &sjt_funcold19);
        }

        sjt_funcold20._refCount = 1;
        sjf_string_copy(&sjt_funcold20, &result);
        sjt_parent76 = &result;
        sjt_functionParam159 = i;
        sjf_array_string_getat(_parent, sjt_functionParam159, &sjt_call30);
        sjt_parent77 = &sjt_call30;
        sjf_string_asstring(sjt_parent77, &sjt_call29);
        sjt_functionParam158 = &sjt_call29;
        sjf_string_add(sjt_parent76, sjt_functionParam158, &sjt_funcold20);
        if (result._refCount == 1) { sjf_string_destroy(&result); }
;
        sjf_string_copy(&result, &sjt_funcold20);
        i++;

        if (sjt_call29._refCount == 1) { sjf_string_destroy(&sjt_call29); }
;
        if (sjt_call30._refCount == 1) { sjf_string_destroy(&sjt_call30); }
;
        if (sjt_funcold19._refCount == 1) { sjf_string_destroy(&sjt_funcold19); }
;
        if (sjt_funcold20._refCount == 1) { sjf_string_destroy(&sjt_funcold20); }
;
    }

    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
    (*_return)->_refCount = 1;
    sjf_string_copy((*_return), &result);

    if (result._refCount == 1) { sjf_string_destroy(&result); }
;
}

void sjf_array_string_clone(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string* _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(sjs_string), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    sjs_string* p = (sjs_string*)arr->data + offset;
    sjs_string* newp = (sjs_string*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if false
    memcpy(newp, p, sizeof(sjs_string) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i]._refCount = 1;
sjf_string_copy(&newp[i], &p[i]);
;
    }
    #endif
    _return->_refCount = 1;
    _return->v = newv;
    sjf_array_string(_return);
}

void sjf_array_string_clone_heap(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string** _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(sjs_string), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    sjs_string* p = (sjs_string*)arr->data + offset;
    sjs_string* newp = (sjs_string*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if false
    memcpy(newp, p, sizeof(sjs_string) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i]._refCount = 1;
sjf_string_copy(&newp[i], &p[i]);
;
    }
    #endif
    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
    (*_return)->_refCount = 1;
    (*_return)->v = newv;
    sjf_array_string_heap((*_return));
}

void sjf_array_string_copy(sjs_array_string* _this, sjs_array_string* _from) {
    _this->v = _from->v;
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_string_destroy(sjs_array_string* _this) {
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount--;
    if (arr->refcount == 0) {
        #if !false && !true
        sjs_string* p = (sjs_string*)arr->data;
        for (int i = 0; i < arr->count; i++) {
            ;
        }
        #endif
        free(arr);
    }
}

void sjf_array_string_getat(sjs_array_string* _parent, int32_t index, sjs_string* _return) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index >= arr->count || index < 0) {
        halt("getAt: out of bounds\n");
    }
    sjs_string* p = (sjs_string*)arr->data;
    _return->_refCount = 1;
sjf_string_copy(_return, &p[index]);
return;;       
}

void sjf_array_string_getat_heap(sjs_array_string* _parent, int32_t index, sjs_string** _return) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index >= arr->count || index < 0) {
        halt("getAt: out of bounds\n");
    }
    sjs_string* p = (sjs_string*)arr->data;
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
(*_return)->_refCount = 1;
sjf_string_copy((*_return), &p[index]);
return;;       
}

void sjf_array_string_getcount(sjs_array_string* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_string_gettotalcount(sjs_array_string* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_string_heap(sjs_array_string* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_string_initat(sjs_array_string* _parent, int32_t index, sjs_string* item) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index != arr->count) {
        halt("initAt: can only initialize last element\n");     
    }
    if (index >= arr->size || index < 0) {
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
    }
    sjs_string* p = (sjs_string*)arr->data;
    p[index]._refCount = 1;
sjf_string_copy(&p[index], item);
;
    arr->count = index + 1;
}

void sjf_array_value(sjs_array_value* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_value_clone(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value* _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(sjs_json_value), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    sjs_json_value* p = (sjs_json_value*)arr->data + offset;
    sjs_json_value* newp = (sjs_json_value*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if false
    memcpy(newp, p, sizeof(sjs_json_value) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i]._refCount = 1;
sjf_json_value_copy(&newp[i], &p[i]);
;
    }
    #endif
    _return->_refCount = 1;
    _return->v = newv;
    sjf_array_value(_return);
}

void sjf_array_value_clone_heap(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value** _return) {
    void* newv;

    newv = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    if (offset + count > arr->count) {
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
    }
    if (count > arr->count - offset) {
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
    }
    sjs_array* newArr = createarray(sizeof(sjs_json_value), newsize);
    if (!newArr) {
        halt("grow: out of memory\n");
    }
    newv = newArr;
    sjs_json_value* p = (sjs_json_value*)arr->data + offset;
    sjs_json_value* newp = (sjs_json_value*)newArr->data;
    newArr->refcount = 1;
    newArr->size = newsize;
    newArr->count = count;
    #if false
    memcpy(newp, p, sizeof(sjs_json_value) * count);
    #else
    for (int i = 0; i < count; i++) {
        newp[i]._refCount = 1;
sjf_json_value_copy(&newp[i], &p[i]);
;
    }
    #endif
    (*_return) = (sjs_array_value*)malloc(sizeof(sjs_array_value));
    (*_return)->_refCount = 1;
    (*_return)->v = newv;
    sjf_array_value_heap((*_return));
}

void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from) {
    _this->v = _from->v;
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_value_destroy(sjs_array_value* _this) {
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount--;
    if (arr->refcount == 0) {
        #if !false && !true
        sjs_json_value* p = (sjs_json_value*)arr->data;
        for (int i = 0; i < arr->count; i++) {
            ;
        }
        #endif
        free(arr);
    }
}

void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index >= arr->count || index < 0) {
        halt("getAt: out of bounds\n");
    }
    sjs_json_value* p = (sjs_json_value*)arr->data;
    _return->_refCount = 1;
sjf_json_value_copy(_return, &p[index]);
return;;       
}

void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index >= arr->count || index < 0) {
        halt("getAt: out of bounds\n");
    }
    sjs_json_value* p = (sjs_json_value*)arr->data;
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
(*_return)->_refCount = 1;
sjf_json_value_copy((*_return), &p[index]);
return;;       
}

void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_value_gettotalcount(sjs_array_value* _parent, int32_t* _return) {
    (*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_value_heap(sjs_array_value* _this) {
    if (_this->v == 0) {
        _this->v = &g_empty;
    }
    sjs_array* arr = (sjs_array*)_this->v;
    arr->refcount++;
}

void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item) {
    sjs_array* arr = (sjs_array*)_parent->v;
    if (index != arr->count) {
        halt("initAt: can only initialize last element\n");     
    }
    if (index >= arr->size || index < 0) {
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
    }
    sjs_json_value* p = (sjs_json_value*)arr->data;
    p[index]._refCount = 1;
sjf_json_value_copy(&p[index], item);
;
    arr->count = index + 1;
}

void sjf_array_value_map_string(sjs_array_value* _parent, cb_value_string cb, sjs_array_string* _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd7;
    int32_t sjt_forStart7;

    newdata = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    sjs_array* newArr = createarray(sizeof(sjs_string), arr->count);
    newArr->count = arr->count;
    newdata = (void*)newArr;
    sjt_forStart7 = 0;
    sjf_array_value_getcount(_parent, &sjt_forEnd7);
    i = sjt_forStart7;
    while (i < sjt_forEnd7) {
        sjs_string newitem = { -1 };
        sjs_json_value sjt_call32 = { -1 };
        sjs_json_value* sjt_functionParam160 = 0;
        int32_t sjt_functionParam161;

        sjt_functionParam161 = i;
        sjf_array_value_getat(_parent, sjt_functionParam161, &sjt_call32);
        sjt_functionParam160 = &sjt_call32;
        cb._cb(cb._parent, sjt_functionParam160, &newitem);
        sjs_string* p = (sjs_string*)newArr->data;
        p[i]._refCount = 1;
sjf_string_copy(&p[i], &newitem);
;
        i++;

        if (newitem._refCount == 1) { sjf_string_destroy(&newitem); }
;
        if (sjt_call32._refCount == 1) { sjf_json_value_destroy(&sjt_call32); }
;
    }

    _return->_refCount = 1;
    _return->v = newdata;
    sjf_array_string(_return);
}

void sjf_array_value_map_string_heap(sjs_array_value* _parent, cb_value_string cb, sjs_array_string** _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd8;
    int32_t sjt_forStart8;

    newdata = 0;
    sjs_array* arr = (sjs_array*)_parent->v;
    sjs_array* newArr = createarray(sizeof(sjs_string), arr->count);
    newArr->count = arr->count;
    newdata = (void*)newArr;
    sjt_forStart8 = 0;
    sjf_array_value_getcount(_parent, &sjt_forEnd8);
    i = sjt_forStart8;
    while (i < sjt_forEnd8) {
        sjs_string newitem = { -1 };
        sjs_json_value sjt_call33 = { -1 };
        sjs_json_value* sjt_functionParam162 = 0;
        int32_t sjt_functionParam163;

        sjt_functionParam163 = i;
        sjf_array_value_getat(_parent, sjt_functionParam163, &sjt_call33);
        sjt_functionParam162 = &sjt_call33;
        cb._cb(cb._parent, sjt_functionParam162, &newitem);
        sjs_string* p = (sjs_string*)newArr->data;
        p[i]._refCount = 1;
sjf_string_copy(&p[i], &newitem);
;
        i++;

        if (newitem._refCount == 1) { sjf_string_destroy(&newitem); }
;
        if (sjt_call33._refCount == 1) { sjf_json_value_destroy(&sjt_call33); }
;
    }

    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
    (*_return)->_refCount = 1;
    (*_return)->v = newdata;
    sjf_array_string_heap((*_return));
}

void sjf_debug_writeline(sjs_string* data) {
    debugout("%s\n", string_char(data));
}

void sjf_halt(sjs_string* reason) {
    halt("%s\n", string_char(reason));
}

void sjf_hash_string_value(sjs_hash_string_value* _this) {
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key) {
    #if false
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;    
    khiter_t k = kh_get(string_value_hash_type, p, key);
    if (k != kh_end(p)) {
        kh_del(string_value_hash_type, p, k);
    }
    #endif
}

void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val) {
    #if false
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
        if (kh_exist(p, k)) {
            sjs_json_value t = kh_value(p, k);
            if (t == val) {
                kh_del(string_value_hash_type, p, k);
            }
        }
    }
    #endif
}

void sjf_hash_string_value_asarray_string(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string* _return) {
    sjs_list_string result = { -1 };
    sjs_lambda1 sjt_call41 = { -1 };
    cb_string_value_void sjt_functionParam168;

    result._refCount = 1;
    result.arr._refCount = 1;
    result.arr.v = 0;
    sjf_array_string(&result.arr);
    sjf_list_string(&result);
    sjs_lambda1* lambainit1;
    sjt_call41._refCount = 1;
    sjt_call41.lambdaparam1 = &result;
    sjt_call41.lambdaparam2 = cb;
    sjt_call41.lambdaparam3 = cb;
    sjf_lambda1(&sjt_call41);
    lambainit1 = &sjt_call41;
    sjt_functionParam168._parent = (sjs_object*)lambainit1;
    sjt_functionParam168._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*))sjf_lambda1_invoke;
    sjf_hash_string_value_each(_parent, sjt_functionParam168);
    _return->_refCount = 1;
    sjf_array_string_copy(_return, &(&result)->arr);

    if (result._refCount == 1) { sjf_list_string_destroy(&result); }
;
    if (sjt_call41._refCount == 1) { sjf_lambda1_destroy(&sjt_call41); }
;
}

void sjf_hash_string_value_asarray_string_heap(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string** _return) {
    sjs_list_string result = { -1 };
    sjs_lambda1 sjt_call43 = { -1 };
    cb_string_value_void sjt_functionParam179;

    result._refCount = 1;
    result.arr._refCount = 1;
    result.arr.v = 0;
    sjf_array_string(&result.arr);
    sjf_list_string(&result);
    sjs_lambda1* lambainit2;
    sjt_call43._refCount = 1;
    sjt_call43.lambdaparam1 = &result;
    sjt_call43.lambdaparam2 = cb;
    sjt_call43.lambdaparam3 = cb;
    sjf_lambda1(&sjt_call43);
    lambainit2 = &sjt_call43;
    sjt_functionParam179._parent = (sjs_object*)lambainit2;
    sjt_functionParam179._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*))sjf_lambda1_invoke;
    sjf_hash_string_value_each(_parent, sjt_functionParam179);
    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
    (*_return)->_refCount = 1;
    sjf_array_string_copy((*_return), &(&result)->arr);

    if (result._refCount == 1) { sjf_list_string_destroy(&result); }
;
    if (sjt_call43._refCount == 1) { sjf_lambda1_destroy(&sjt_call43); }
;
}

void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from) {
    _this->_hash = _from->_hash;
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
    p->refcount++;
}

void sjf_hash_string_value_destroy(sjs_hash_string_value* _this) {
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
    p->refcount--;
    if (p->refcount == 0) {
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
            if (kh_exist(p, k)) {
                #if false
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
                weakptr_cb_remove(kh_key(p, k), cb);
                #else
                ;
                #endif
                #if false
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
                weakptr_cb_remove(kh_value(p, k), cb);
                #else
                ;
                #endif
            }
        }
        kh_destroy(string_value_hash_type, (khash_t(string_value_hash_type)*)_this->_hash);
    }
}

void sjf_hash_string_value_each(sjs_hash_string_value* _parent, cb_string_value_void cb) {
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
        if (kh_exist(p, k)) {
            cb._cb(
            cb._parent, 
            #if true
            &kh_key(p, k), 
            #else
            kh_key(p, k), 
            #endif
            #if true
            &kh_value(p, k)
            #else
            kh_value(p, k)
            #endif
            );
        }
    }
}

void sjf_hash_string_value_heap(sjs_hash_string_value* _this) {
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val) {
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
    #if true
    khiter_t k = kh_get(string_value_hash_type, p, *key);
    #else
    khiter_t k = kh_get(string_value_hash_type, p, key);
    #endif
    if (k != kh_end(p)) {            
    ;
}
int ret;
#if true
k = kh_put(string_value_hash_type, p, *key, &ret);
#else
k = kh_put(string_value_hash_type, p, key, &ret);
#endif
if (!ret) kh_del(string_value_hash_type, p, k);
#if false
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
weakptr_cb_add(key, cb);
#else
sjs_string t;
t._refCount = 1;
sjf_string_copy(&t, key);
;
#endif
#if false
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
weakptr_cb_add(val, cb);
kh_val(p, k) = val;
#else
kh_val(p, k)._refCount = 1;
sjf_json_value_copy(&kh_val(p, k), val);
;
#endif
}

void sjf_hash_type_bool(sjs_hash_type_bool* _this) {
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key) {
    #if false
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;    
    khiter_t k = kh_get(type_bool_hash_type, p, key);
    if (k != kh_end(p)) {
        kh_del(type_bool_hash_type, p, k);
    }
    #endif
}

void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val) {
    #if false
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
        if (kh_exist(p, k)) {
            bool t = kh_value(p, k);
            if (t == val) {
                kh_del(type_bool_hash_type, p, k);
            }
        }
    }
    #endif
}

void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from) {
    _this->_hash = _from->_hash;
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
    p->refcount++;
}

void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this) {
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
    p->refcount--;
    if (p->refcount == 0) {
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
            if (kh_exist(p, k)) {
                #if false
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovekey };
                weakptr_cb_remove(kh_key(p, k), cb);
                #else
                ;
                #endif
                #if false
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovevalue };
                weakptr_cb_remove(kh_value(p, k), cb);
                #else
                ;
                #endif
            }
        }
        kh_destroy(type_bool_hash_type, (khash_t(type_bool_hash_type)*)_this->_hash);
    }
}

void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this) {
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_i32_asstring(int32_t val, int32_t base, sjs_string* _return) {
    int32_t count;
    void* vresult;

    count = 0;
    vresult = 0;
    sjs_array* arr = createarray(1, 256);
    vresult = (void*)arr;
    char *tmp = (char*)arr->data + 128;
    char *tp = (char*)arr->data + 128;
    int i;
    unsigned v;
    int sign = (base == 10 && val < 0);    
    if (sign)
    v = -val;
    else
    v = (unsigned)val;
    while (v || tp == tmp)
    {
        i = v % base;
        v /= base; // v/=base uses less CPU clocks than v=v/base does
        if (i < 10)
        *tp++ = i + '0';
        else
        *tp++ = i + 'a' - 10;
    }
    int len = tp - tmp;
    char* sp = (char*)arr->data;
    if (sign) 
    {
        *sp++ = '-';
        len++;
    }
    while (tp > tmp)
    *sp++ = *--tp;
    arr->count = len;
    count = len;
    _return->_refCount = 1;
    _return->offset = 0;
    _return->count = count;
    _return->data._refCount = 1;
    _return->data.v = vresult;
    sjf_array_char(&_return->data);
    _return->_isnullterminated = false;
    sjf_string(_return);
}

void sjf_i32_asstring_heap(int32_t val, int32_t base, sjs_string** _return) {
    int32_t count;
    void* vresult;

    count = 0;
    vresult = 0;
    sjs_array* arr = createarray(1, 256);
    vresult = (void*)arr;
    char *tmp = (char*)arr->data + 128;
    char *tp = (char*)arr->data + 128;
    int i;
    unsigned v;
    int sign = (base == 10 && val < 0);    
    if (sign)
    v = -val;
    else
    v = (unsigned)val;
    while (v || tp == tmp)
    {
        i = v % base;
        v /= base; // v/=base uses less CPU clocks than v=v/base does
        if (i < 10)
        *tp++ = i + '0';
        else
        *tp++ = i + 'a' - 10;
    }
    int len = tp - tmp;
    char* sp = (char*)arr->data;
    if (sign) 
    {
        *sp++ = '-';
        len++;
    }
    while (tp > tmp)
    *sp++ = *--tp;
    arr->count = len;
    count = len;
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
    (*_return)->_refCount = 1;
    (*_return)->offset = 0;
    (*_return)->count = count;
    (*_return)->data._refCount = 1;
    (*_return)->data.v = vresult;
    sjf_array_char(&(*_return)->data);
    (*_return)->_isnullterminated = false;
    sjf_string_heap((*_return));
}

void sjf_i32_max(int32_t a, int32_t b, int32_t* _return) {
    if (a < b) {
        (*_return) = b;
    } else {
        (*_return) = a;
    }
}

void sjf_json_parse(sjs_string* s, sjs_json_value* _return) {
    sjs_tuple2_i32_value result = { -1 };
    sjs_string sjt_call13 = { -1 };
    sjs_string sjt_call14 = { -1 };
    sjs_string sjt_call15 = { -1 };
    sjs_string sjt_call16 = { -1 };
    sjs_string sjt_call17 = { -1 };
    sjs_string* sjt_functionParam133 = 0;
    int32_t sjt_functionParam134;
    sjs_string* sjt_functionParam135 = 0;
    int32_t sjt_functionParam136;
    int32_t sjt_functionParam137;
    sjs_string* sjt_functionParam138 = 0;
    sjs_string* sjt_functionParam139 = 0;
    int32_t sjt_functionParam140;
    int32_t sjt_functionParam141;
    sjs_string* sjt_parent66 = 0;
    sjs_string* sjt_parent67 = 0;
    sjs_json_value sjt_value2 = { -1 };

    sjt_functionParam133 = s;
    sjt_functionParam134 = 0;
    sjf_json_parse_value(sjt_functionParam133, sjt_functionParam134, &result);
    sjt_functionParam136 = s->count;
    sjt_functionParam137 = 10;
    sjf_i32_asstring(sjt_functionParam136, sjt_functionParam137, &sjt_call15);
    sjt_parent67 = &sjt_call15;
    sjt_call16._refCount = 1;
    sjt_call16.offset = 0;
    sjt_call16.count = 3;
    sjt_call16.data._refCount = 1;
    sjt_call16.data.v = &sjg_string4;
    sjf_array_char(&sjt_call16.data);
    sjt_call16._isnullterminated = false;
    sjf_string(&sjt_call16);
    sjt_functionParam138 = &sjt_call16;
    sjf_string_add(sjt_parent67, sjt_functionParam138, &sjt_call14);
    sjt_parent66 = &sjt_call14;
    sjt_functionParam140 = (&result)->item1;
    sjt_functionParam141 = 10;
    sjf_i32_asstring(sjt_functionParam140, sjt_functionParam141, &sjt_call17);
    sjt_functionParam139 = &sjt_call17;
    sjf_string_add(sjt_parent66, sjt_functionParam139, &sjt_call13);
    sjt_functionParam135 = &sjt_call13;
    sjf_debug_writeline(sjt_functionParam135);
    if ((&result)->item1 == s->count) {
        sjt_value2._refCount = 1;
        sjf_json_value_copy(&sjt_value2, &(&result)->item2);
        sjs_json_value* copyoption25 = &sjt_value2;
        if (copyoption25 != 0) {
            _return->_refCount = 1;
            sjf_json_value_copy(_return, copyoption25);
        } else {
            _return->_refCount = -1;
        }
    } else {
        _return->_refCount = -1;
    }

    if (result._refCount == 1) { sjf_tuple2_i32_value_destroy(&result); }
;
    if (sjt_call13._refCount == 1) { sjf_string_destroy(&sjt_call13); }
;
    if (sjt_call14._refCount == 1) { sjf_string_destroy(&sjt_call14); }
;
    if (sjt_call15._refCount == 1) { sjf_string_destroy(&sjt_call15); }
;
    if (sjt_call16._refCount == 1) { sjf_string_destroy(&sjt_call16); }
;
    if (sjt_call17._refCount == 1) { sjf_string_destroy(&sjt_call17); }
;
    if (sjt_value2._refCount == 1) { sjf_json_value_destroy(&sjt_value2); }
;
}

void sjf_json_parse_heap(sjs_string* s, sjs_json_value** _return) {
    sjs_tuple2_i32_value result = { -1 };
    sjs_string sjt_call18 = { -1 };
    sjs_string sjt_call19 = { -1 };
    sjs_string sjt_call20 = { -1 };
    sjs_string sjt_call21 = { -1 };
    sjs_string sjt_call22 = { -1 };
    sjs_string* sjt_functionParam142 = 0;
    int32_t sjt_functionParam143;
    sjs_string* sjt_functionParam144 = 0;
    int32_t sjt_functionParam145;
    int32_t sjt_functionParam146;
    sjs_string* sjt_functionParam147 = 0;
    sjs_string* sjt_functionParam148 = 0;
    int32_t sjt_functionParam149;
    int32_t sjt_functionParam150;
    sjs_string* sjt_parent68 = 0;
    sjs_string* sjt_parent69 = 0;

    sjt_functionParam142 = s;
    sjt_functionParam143 = 0;
    sjf_json_parse_value(sjt_functionParam142, sjt_functionParam143, &result);
    sjt_functionParam145 = s->count;
    sjt_functionParam146 = 10;
    sjf_i32_asstring(sjt_functionParam145, sjt_functionParam146, &sjt_call20);
    sjt_parent69 = &sjt_call20;
    sjt_call21._refCount = 1;
    sjt_call21.offset = 0;
    sjt_call21.count = 3;
    sjt_call21.data._refCount = 1;
    sjt_call21.data.v = &sjg_string4;
    sjf_array_char(&sjt_call21.data);
    sjt_call21._isnullterminated = false;
    sjf_string(&sjt_call21);
    sjt_functionParam147 = &sjt_call21;
    sjf_string_add(sjt_parent69, sjt_functionParam147, &sjt_call19);
    sjt_parent68 = &sjt_call19;
    sjt_functionParam149 = (&result)->item1;
    sjt_functionParam150 = 10;
    sjf_i32_asstring(sjt_functionParam149, sjt_functionParam150, &sjt_call22);
    sjt_functionParam148 = &sjt_call22;
    sjf_string_add(sjt_parent68, sjt_functionParam148, &sjt_call18);
    sjt_functionParam144 = &sjt_call18;
    sjf_debug_writeline(sjt_functionParam144);
    if ((&result)->item1 == s->count) {
        sjs_json_value* sjt_value3 = 0;

        sjt_value3 = (sjs_json_value*)malloc(sizeof(sjs_json_value));
        sjt_value3->_refCount = 1;
        sjf_json_value_copy(sjt_value3, (&(&result)->item2));
        (*_return) = sjt_value3;
        if ((*_return) != 0) {
            (*_return)->_refCount++;
        }

        sjt_value3->_refCount--;
        if (sjt_value3->_refCount <= 0) {
            weakptr_release(sjt_value3);
            sjf_json_value_destroy(sjt_value3);
            free(sjt_value3);
        }
    } else {
        (*_return) = 0;
        if ((*_return) != 0) {
            (*_return)->_refCount++;
        }
    }

    if (result._refCount == 1) { sjf_tuple2_i32_value_destroy(&result); }
;
    if (sjt_call18._refCount == 1) { sjf_string_destroy(&sjt_call18); }
;
    if (sjt_call19._refCount == 1) { sjf_string_destroy(&sjt_call19); }
;
    if (sjt_call20._refCount == 1) { sjf_string_destroy(&sjt_call20); }
;
    if (sjt_call21._refCount == 1) { sjf_string_destroy(&sjt_call21); }
;
    if (sjt_call22._refCount == 1) { sjf_string_destroy(&sjt_call22); }
;
}

void sjf_json_parse_number(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    int32_t sjt_functionParam82;
    int32_t sjt_functionParam83;
    sjs_string* sjt_parent49 = 0;
    bool sjt_while6;

    isescaped = false;
    index = startindex;
    ismatched = true;
    if (index < s->count) {
        sjt_while6 = ismatched;
    } else {
        sjt_while6 = false;
    }

    while (sjt_while6) {
        char ch;
        bool sjt_capture28;
        bool sjt_capture29;
        int32_t sjt_functionParam81;
        sjs_string* sjt_parent48 = 0;

        sjt_parent48 = s;
        sjt_functionParam81 = index;
        sjf_string_getat(sjt_parent48, sjt_functionParam81, &ch);
        if (ch >= '0') {
            sjt_capture28 = (ch <= '9');
        } else {
            sjt_capture28 = false;
        }

        if (ch >= 'a') {
            sjt_capture29 = (ch <= 'z');
        } else {
            sjt_capture29 = false;
        }

        if (sjt_capture28 || ((ch == '.') || sjt_capture29)) {
            index = index + 1;
        } else {
            ismatched = false;
        }

        if (index < s->count) {
            sjt_while6 = ismatched;
        } else {
            sjt_while6 = false;
        }
    }

    _return->_refCount = 1;
    _return->item1 = index;
    sjt_parent49 = s;
    sjt_functionParam82 = startindex;
    sjt_functionParam83 = index - startindex;
    sjf_string_substr(sjt_parent49, sjt_functionParam82, sjt_functionParam83, &_return->item2);
    sjf_tuple2_i32_string(_return);
}

void sjf_json_parse_number_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    int32_t sjt_functionParam85;
    int32_t sjt_functionParam86;
    sjs_string* sjt_parent51 = 0;
    bool sjt_while7;

    isescaped = false;
    index = startindex;
    ismatched = true;
    if (index < s->count) {
        sjt_while7 = ismatched;
    } else {
        sjt_while7 = false;
    }

    while (sjt_while7) {
        char ch;
        bool sjt_capture30;
        bool sjt_capture31;
        int32_t sjt_functionParam84;
        sjs_string* sjt_parent50 = 0;

        sjt_parent50 = s;
        sjt_functionParam84 = index;
        sjf_string_getat(sjt_parent50, sjt_functionParam84, &ch);
        if (ch >= '0') {
            sjt_capture30 = (ch <= '9');
        } else {
            sjt_capture30 = false;
        }

        if (ch >= 'a') {
            sjt_capture31 = (ch <= 'z');
        } else {
            sjt_capture31 = false;
        }

        if (sjt_capture30 || ((ch == '.') || sjt_capture31)) {
            index = index + 1;
        } else {
            ismatched = false;
        }

        if (index < s->count) {
            sjt_while7 = ismatched;
        } else {
            sjt_while7 = false;
        }
    }

    (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
    (*_return)->_refCount = 1;
    (*_return)->item1 = index;
    sjt_parent51 = s;
    sjt_functionParam85 = startindex;
    sjt_functionParam86 = index - startindex;
    sjf_string_substr(sjt_parent51, sjt_functionParam85, sjt_functionParam86, &(*_return)->item2);
    sjf_tuple2_i32_string_heap((*_return));
}

void sjf_json_parse_string(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    bool sjt_while3;

    isescaped = false;
    index = startindex + 1;
    ismatched = false;
    if (index < s->count) {
        bool result3;

        result3 = !ismatched;
        sjt_while3 = result3;
    } else {
        sjt_while3 = false;
    }

    while (sjt_while3) {
        char ch;
        bool result4;
        bool sjt_capture7;
        int32_t sjt_functionParam16;
        sjs_string* sjt_parent9 = 0;

        sjt_parent9 = s;
        sjt_functionParam16 = index;
        sjf_string_getat(sjt_parent9, sjt_functionParam16, &ch);
        result4 = !isescaped;
        if (result4) {
            sjt_capture7 = (ch == '\\');
        } else {
            sjt_capture7 = false;
        }

        if (sjt_capture7) {
            isescaped = true;
        } else {
            if (ch == '\"') {
                ismatched = true;
            }

            isescaped = false;
        }

        index = index + 1;
        if (index < s->count) {
            bool result5;

            result5 = !ismatched;
            sjt_while3 = result5;
        } else {
            sjt_while3 = false;
        }
    }

    if (ismatched) {
        int32_t sjt_functionParam19;
        int32_t sjt_functionParam20;
        sjs_string* sjt_parent12 = 0;

        _return->_refCount = 1;
        _return->item1 = index;
        sjt_parent12 = s;
        sjt_functionParam19 = startindex;
        sjt_functionParam20 = index - startindex;
        sjf_string_substr(sjt_parent12, sjt_functionParam19, sjt_functionParam20, &_return->item2);
        sjf_tuple2_i32_string(_return);
    } else {
        _return->_refCount = 1;
        _return->item1 = s->count + 1;
        _return->item2._refCount = 1;
        _return->item2.offset = 0;
        _return->item2.count = 0;
        _return->item2.data._refCount = 1;
        _return->item2.data.v = &sjg_string1;
        sjf_array_char(&_return->item2.data);
        _return->item2._isnullterminated = false;
        sjf_string(&_return->item2);
        sjf_tuple2_i32_string(_return);
    }
}

void sjf_json_parse_string_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    bool sjt_while4;

    isescaped = false;
    index = startindex + 1;
    ismatched = false;
    if (index < s->count) {
        bool result6;

        result6 = !ismatched;
        sjt_while4 = result6;
    } else {
        sjt_while4 = false;
    }

    while (sjt_while4) {
        char ch;
        bool result7;
        bool sjt_capture10;
        int32_t sjt_functionParam21;
        sjs_string* sjt_parent13 = 0;

        sjt_parent13 = s;
        sjt_functionParam21 = index;
        sjf_string_getat(sjt_parent13, sjt_functionParam21, &ch);
        result7 = !isescaped;
        if (result7) {
            sjt_capture10 = (ch == '\\');
        } else {
            sjt_capture10 = false;
        }

        if (sjt_capture10) {
            isescaped = true;
        } else {
            if (ch == '\"') {
                ismatched = true;
            }

            isescaped = false;
        }

        index = index + 1;
        if (index < s->count) {
            bool result8;

            result8 = !ismatched;
            sjt_while4 = result8;
        } else {
            sjt_while4 = false;
        }
    }

    if (ismatched) {
        int32_t sjt_functionParam22;
        int32_t sjt_functionParam23;
        sjs_string* sjt_parent14 = 0;

        (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
        (*_return)->_refCount = 1;
        (*_return)->item1 = index;
        sjt_parent14 = s;
        sjt_functionParam22 = startindex;
        sjt_functionParam23 = index - startindex;
        sjf_string_substr(sjt_parent14, sjt_functionParam22, sjt_functionParam23, &(*_return)->item2);
        sjf_tuple2_i32_string_heap((*_return));
    } else {
        (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
        (*_return)->_refCount = 1;
        (*_return)->item1 = s->count + 1;
        (*_return)->item2._refCount = 1;
        (*_return)->item2.offset = 0;
        (*_return)->item2.count = 0;
        (*_return)->item2.data._refCount = 1;
        (*_return)->item2.data.v = &sjg_string1;
        sjf_array_char(&(*_return)->item2.data);
        (*_return)->item2._isnullterminated = false;
        sjf_string(&(*_return)->item2);
        sjf_tuple2_i32_string_heap((*_return));
    }
}

void sjf_json_parse_value(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value* _return) {
    int32_t index;
    sjs_string* sjt_functionParam6 = 0;
    int32_t sjt_functionParam7;
    int32_t sjt_functionParam8;
    sjs_string* sjt_parent5 = 0;
    char underscore1;

    sjt_functionParam6 = s;
    sjt_functionParam7 = startindex;
    sjf_json_parse_whitespace(sjt_functionParam6, sjt_functionParam7, &index);
    sjt_parent5 = s;
    sjt_functionParam8 = index;
    sjf_string_getat(sjt_parent5, sjt_functionParam8, &underscore1);
    if (underscore1 == '{') {
        sjs_hash_string_value h = { -1 };
        bool isfirst;
        bool shouldcontinue;
        bool sjt_while2;

        h._refCount = 1;
        sjf_hash_string_value(&h);
        index = index + 1;
        isfirst = true;
        shouldcontinue = true;
        if (index < s->count) {
            sjt_while2 = shouldcontinue;
        } else {
            sjt_while2 = false;
        }

        while (sjt_while2) {
            sjs_string key = { -1 };
            sjs_tuple2_i32_string keyresult = { -1 };
            int32_t sjt_funcold2;
            int32_t sjt_functionParam10;
            sjs_string* sjt_functionParam9 = 0;
            sjs_json_value value = { -1 };
            sjs_tuple2_i32_value valueresult = { -1 };

            sjt_funcold2 = index;
            sjt_functionParam9 = s;
            sjt_functionParam10 = index;
            sjf_json_parse_whitespace(sjt_functionParam9, sjt_functionParam10, &sjt_funcold2);
            index = sjt_funcold2;
            if (isfirst) {
                bool sjt_capture2;

                isfirst = false;
                if (index < s->count) {
                    char sjt_capture3;
                    int32_t sjt_functionParam11;
                    sjs_string* sjt_parent6 = 0;

                    sjt_parent6 = s;
                    sjt_functionParam11 = index;
                    sjf_string_getat(sjt_parent6, sjt_functionParam11, &sjt_capture3);
                    sjt_capture2 = (sjt_capture3 == '}');
                } else {
                    sjt_capture2 = false;
                }

                if (sjt_capture2) {
                    index = index + 1;
                    shouldcontinue = false;
                }
            } else {
                char sjt_capture4;
                int32_t sjt_functionParam12;
                sjs_string* sjt_parent7 = 0;

                sjt_parent7 = s;
                sjt_functionParam12 = index;
                sjf_string_getat(sjt_parent7, sjt_functionParam12, &sjt_capture4);
                if (sjt_capture4 == ',') {
                    int32_t sjt_funcold3;
                    sjs_string* sjt_functionParam13 = 0;
                    int32_t sjt_functionParam14;

                    index = index + 1;
                    sjt_funcold3 = index;
                    sjt_functionParam13 = s;
                    sjt_functionParam14 = index;
                    sjf_json_parse_whitespace(sjt_functionParam13, sjt_functionParam14, &sjt_funcold3);
                    index = sjt_funcold3;
                } else {
                    index = s->count + 1;
                }
            }

            if (shouldcontinue) {
                bool sjt_capture5;

                if (index < s->count) {
                    char sjt_capture6;
                    int32_t sjt_functionParam15;
                    sjs_string* sjt_parent8 = 0;

                    sjt_parent8 = s;
                    sjt_functionParam15 = index;
                    sjf_string_getat(sjt_parent8, sjt_functionParam15, &sjt_capture6);
                    sjt_capture5 = (sjt_capture6 == '\"');
                } else {
                    sjt_capture5 = false;
                }

                if (sjt_capture5) {
                    char sjt_capture11;
                    bool sjt_capture12;
                    int32_t sjt_funcold4;
                    int32_t sjt_funcold5;
                    int32_t sjt_funcold6;
                    sjs_string* sjt_functionParam24 = 0;
                    int32_t sjt_functionParam25;
                    sjs_string* sjt_functionParam28 = 0;
                    int32_t sjt_functionParam29;
                    int32_t sjt_functionParam30;
                    sjs_string* sjt_functionParam31 = 0;
                    int32_t sjt_functionParam32;
                    sjs_string* sjt_functionParam33 = 0;
                    int32_t sjt_functionParam34;
                    sjs_string* sjt_functionParam35 = 0;
                    sjs_json_value* sjt_functionParam36 = 0;
                    sjs_string* sjt_functionParam37 = 0;
                    int32_t sjt_functionParam38;
                    sjs_string* sjt_parent16 = 0;
                    sjs_hash_string_value* sjt_parent17 = 0;

                    sjt_functionParam24 = s;
                    sjt_functionParam25 = index;
                    sjf_json_parse_string(sjt_functionParam24, sjt_functionParam25, &keyresult);
                    index = (&keyresult)->item1 + 1;
                    if ((&(&keyresult)->item2)->count > 0) {
                        int32_t sjt_functionParam26;
                        int32_t sjt_functionParam27;
                        sjs_string* sjt_parent15 = 0;

                        sjt_parent15 = &(&keyresult)->item2;
                        sjt_functionParam26 = 1;
                        sjt_functionParam27 = (&(&keyresult)->item2)->count - 2;
                        sjf_string_substr(sjt_parent15, sjt_functionParam26, sjt_functionParam27, &key);
                    } else {
                        key._refCount = 1;
                        key.offset = 0;
                        key.count = 0;
                        key.data._refCount = 1;
                        key.data.v = &sjg_string1;
                        sjf_array_char(&key.data);
                        key._isnullterminated = false;
                        sjf_string(&key);
                    }

                    sjt_funcold4 = index;
                    sjt_functionParam28 = s;
                    sjt_functionParam29 = index;
                    sjf_json_parse_whitespace(sjt_functionParam28, sjt_functionParam29, &sjt_funcold4);
                    index = sjt_funcold4;
                    sjt_parent16 = s;
                    sjt_functionParam30 = index;
                    sjf_string_getat(sjt_parent16, sjt_functionParam30, &sjt_capture11);
                    if (sjt_capture11 == ':') {
                        index = index + 1;
                    } else {
                        index = s->count + 1;
                    }

                    sjt_funcold5 = index;
                    sjt_functionParam31 = s;
                    sjt_functionParam32 = index;
                    sjf_json_parse_whitespace(sjt_functionParam31, sjt_functionParam32, &sjt_funcold5);
                    index = sjt_funcold5;
                    sjt_functionParam33 = s;
                    sjt_functionParam34 = index;
                    sjf_json_parse_value(sjt_functionParam33, sjt_functionParam34, &valueresult);
                    index = (&valueresult)->item1;
                    value._refCount = 1;
                    sjf_json_value_copy(&value, &(&valueresult)->item2);
                    sjt_parent17 = &h;
                    sjt_functionParam35 = &key;
                    sjt_functionParam36 = &value;
                    sjf_hash_string_value_setat(sjt_parent17, sjt_functionParam35, sjt_functionParam36);
                    sjt_funcold6 = index;
                    sjt_functionParam37 = s;
                    sjt_functionParam38 = index;
                    sjf_json_parse_whitespace(sjt_functionParam37, sjt_functionParam38, &sjt_funcold6);
                    index = sjt_funcold6;
                    if (index < s->count) {
                        char sjt_capture13;
                        int32_t sjt_functionParam39;
                        sjs_string* sjt_parent18 = 0;

                        sjt_parent18 = s;
                        sjt_functionParam39 = index;
                        sjf_string_getat(sjt_parent18, sjt_functionParam39, &sjt_capture13);
                        sjt_capture12 = (sjt_capture13 == '}');
                    } else {
                        sjt_capture12 = false;
                    }

                    if (sjt_capture12) {
                        index = index + 1;
                        shouldcontinue = false;
                    }
                } else {
                    index = s->count + 1;
                }
            }

            if (index < s->count) {
                sjt_while2 = shouldcontinue;
            } else {
                sjt_while2 = false;
            }

            if (key._refCount == 1) { sjf_string_destroy(&key); }
;
            if (keyresult._refCount == 1) { sjf_tuple2_i32_string_destroy(&keyresult); }
;
            if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
            if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
        }

        _return->_refCount = 1;
        _return->item1 = index;
        _return->item2._refCount = 1;
        _return->item2.s._refCount = -1;
        _return->item2.a._refCount = -1;
        sjs_hash_string_value* copyoption17 = &h;
        if (copyoption17 != 0) {
            _return->item2.h._refCount = 1;
            sjf_hash_string_value_copy(&_return->item2.h, copyoption17);
        } else {
            _return->item2.h._refCount = -1;
        }

        sjf_json_value(&_return->item2);
        sjf_tuple2_i32_value(_return);

        if (h._refCount == 1) { sjf_hash_string_value_destroy(&h); }
;
    } else {
        if (underscore1 == '[') {
            bool isfirst;
            sjs_list_value l = { -1 };
            bool shouldcontinue;
            bool sjt_while5;

            l._refCount = 1;
            l.arr._refCount = 1;
            l.arr.v = 0;
            sjf_array_value(&l.arr);
            sjf_list_value(&l);
            index = index + 1;
            isfirst = true;
            shouldcontinue = true;
            if (index < s->count) {
                sjt_while5 = shouldcontinue;
            } else {
                sjt_while5 = false;
            }

            while (sjt_while5) {
                sjs_string sjt_call3 = { -1 };
                sjs_string sjt_call4 = { -1 };
                sjs_string sjt_call5 = { -1 };
                bool sjt_capture26;
                int32_t sjt_funcold7;
                int32_t sjt_funcold9;
                sjs_string* sjt_functionParam40 = 0;
                int32_t sjt_functionParam41;
                sjs_string* sjt_functionParam42 = 0;
                sjs_string* sjt_functionParam61 = 0;
                int32_t sjt_functionParam62;
                int32_t sjt_functionParam63;
                sjs_string* sjt_functionParam66 = 0;
                int32_t sjt_functionParam67;
                sjs_json_value* sjt_functionParam75 = 0;
                sjs_string* sjt_functionParam76 = 0;
                int32_t sjt_functionParam77;
                sjs_string* sjt_parent35 = 0;
                sjs_string* sjt_parent36 = 0;
                sjs_list_value* sjt_parent46 = 0;
                sjs_json_value value = { -1 };
                sjs_tuple2_i32_value valueresult = { -1 };

                sjt_funcold7 = index;
                sjt_functionParam40 = s;
                sjt_functionParam41 = index;
                sjf_json_parse_whitespace(sjt_functionParam40, sjt_functionParam41, &sjt_funcold7);
                index = sjt_funcold7;
                sjt_call4._refCount = 1;
                sjt_call4.offset = 0;
                sjt_call4.count = 12;
                sjt_call4.data._refCount = 1;
                sjt_call4.data.v = &sjg_string3;
                sjf_array_char(&sjt_call4.data);
                sjt_call4._isnullterminated = false;
                sjf_string(&sjt_call4);
                sjt_parent35 = &sjt_call4;
                sjt_parent36 = s;
                sjt_functionParam62 = index;
                sjt_functionParam63 = s->count - index;
                sjf_string_substr(sjt_parent36, sjt_functionParam62, sjt_functionParam63, &sjt_call5);
                sjt_functionParam61 = &sjt_call5;
                sjf_string_add(sjt_parent35, sjt_functionParam61, &sjt_call3);
                sjt_functionParam42 = &sjt_call3;
                sjf_debug_writeline(sjt_functionParam42);
                if (isfirst) {
                    bool sjt_capture20;

                    isfirst = false;
                    if (index < s->count) {
                        char sjt_capture21;
                        int32_t sjt_functionParam64;
                        sjs_string* sjt_parent37 = 0;

                        sjt_parent37 = s;
                        sjt_functionParam64 = index;
                        sjf_string_getat(sjt_parent37, sjt_functionParam64, &sjt_capture21);
                        sjt_capture20 = (sjt_capture21 == ']');
                    } else {
                        sjt_capture20 = false;
                    }

                    if (sjt_capture20) {
                        index = index + 1;
                        shouldcontinue = false;
                    }
                } else {
                    char sjt_capture22;
                    int32_t sjt_functionParam65;
                    sjs_string* sjt_parent38 = 0;

                    sjt_parent38 = s;
                    sjt_functionParam65 = index;
                    sjf_string_getat(sjt_parent38, sjt_functionParam65, &sjt_capture22);
                    if (sjt_capture22 == ',') {
                        index = index + 1;
                    } else {
                        index = s->count + 1;
                    }
                }

                sjt_functionParam66 = s;
                sjt_functionParam67 = index;
                sjf_json_parse_value(sjt_functionParam66, sjt_functionParam67, &valueresult);
                index = (&valueresult)->item1;
                value._refCount = 1;
                sjf_json_value_copy(&value, &(&valueresult)->item2);
                sjt_parent46 = &l;
                sjt_functionParam75 = &value;
                sjf_list_value_add(sjt_parent46, sjt_functionParam75);
                sjt_funcold9 = index;
                sjt_functionParam76 = s;
                sjt_functionParam77 = index;
                sjf_json_parse_whitespace(sjt_functionParam76, sjt_functionParam77, &sjt_funcold9);
                index = sjt_funcold9;
                if (index < s->count) {
                    char sjt_capture27;
                    int32_t sjt_functionParam78;
                    sjs_string* sjt_parent47 = 0;

                    sjt_parent47 = s;
                    sjt_functionParam78 = index;
                    sjf_string_getat(sjt_parent47, sjt_functionParam78, &sjt_capture27);
                    sjt_capture26 = (sjt_capture27 == ']');
                } else {
                    sjt_capture26 = false;
                }

                if (sjt_capture26) {
                    index = index + 1;
                    shouldcontinue = false;
                }

                if (index < s->count) {
                    sjt_while5 = shouldcontinue;
                } else {
                    sjt_while5 = false;
                }

                if (sjt_call3._refCount == 1) { sjf_string_destroy(&sjt_call3); }
;
                if (sjt_call4._refCount == 1) { sjf_string_destroy(&sjt_call4); }
;
                if (sjt_call5._refCount == 1) { sjf_string_destroy(&sjt_call5); }
;
                if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
                if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
            }

            _return->_refCount = 1;
            _return->item1 = index;
            _return->item2._refCount = 1;
            _return->item2.s._refCount = -1;
            sjs_array_value* copyoption18 = &(&l)->arr;
            if (copyoption18 != 0) {
                _return->item2.a._refCount = 1;
                sjf_array_value_copy(&_return->item2.a, copyoption18);
            } else {
                _return->item2.a._refCount = -1;
            }

            _return->item2.h._refCount = -1;
            sjf_json_value(&_return->item2);
            sjf_tuple2_i32_value(_return);

            if (l._refCount == 1) { sjf_list_value_destroy(&l); }
;
        } else {
            if (underscore1 == '\"') {
                sjs_tuple2_i32_string result = { -1 };
                sjs_string* sjt_functionParam79 = 0;
                int32_t sjt_functionParam80;

                sjt_functionParam79 = s;
                sjt_functionParam80 = index;
                sjf_json_parse_string(sjt_functionParam79, sjt_functionParam80, &result);
                _return->_refCount = 1;
                _return->item1 = (&result)->item1;
                _return->item2._refCount = 1;
                sjs_string* copyoption19 = &(&result)->item2;
                if (copyoption19 != 0) {
                    _return->item2.s._refCount = 1;
                    sjf_string_copy(&_return->item2.s, copyoption19);
                } else {
                    _return->item2.s._refCount = -1;
                }

                _return->item2.a._refCount = -1;
                _return->item2.h._refCount = -1;
                sjf_json_value(&_return->item2);
                sjf_tuple2_i32_value(_return);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
            } else {
                sjs_tuple2_i32_string result = { -1 };
                sjs_string* sjt_functionParam87 = 0;
                int32_t sjt_functionParam88;

                sjt_functionParam87 = s;
                sjt_functionParam88 = index;
                sjf_json_parse_number(sjt_functionParam87, sjt_functionParam88, &result);
                _return->_refCount = 1;
                _return->item1 = (&result)->item1;
                _return->item2._refCount = 1;
                sjs_string* copyoption20 = &(&result)->item2;
                if (copyoption20 != 0) {
                    _return->item2.s._refCount = 1;
                    sjf_string_copy(&_return->item2.s, copyoption20);
                } else {
                    _return->item2.s._refCount = -1;
                }

                _return->item2.a._refCount = -1;
                _return->item2.h._refCount = -1;
                sjf_json_value(&_return->item2);
                sjf_tuple2_i32_value(_return);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
            }
        }
    }
}

void sjf_json_parse_value_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value** _return) {
    int32_t index;
    sjs_string* sjt_functionParam89 = 0;
    int32_t sjt_functionParam90;
    int32_t sjt_functionParam91;
    sjs_string* sjt_parent52 = 0;
    char underscore2;

    sjt_functionParam89 = s;
    sjt_functionParam90 = startindex;
    sjf_json_parse_whitespace(sjt_functionParam89, sjt_functionParam90, &index);
    sjt_parent52 = s;
    sjt_functionParam91 = index;
    sjf_string_getat(sjt_parent52, sjt_functionParam91, &underscore2);
    if (underscore2 == '{') {
        sjs_hash_string_value h = { -1 };
        bool isfirst;
        bool shouldcontinue;
        sjs_tuple2_i32_value sjt_call6 = { -1 };
        bool sjt_while8;

        h._refCount = 1;
        sjf_hash_string_value(&h);
        index = index + 1;
        isfirst = true;
        shouldcontinue = true;
        if (index < s->count) {
            sjt_while8 = shouldcontinue;
        } else {
            sjt_while8 = false;
        }

        while (sjt_while8) {
            sjs_string key = { -1 };
            sjs_tuple2_i32_string keyresult = { -1 };
            int32_t sjt_funcold10;
            sjs_string* sjt_functionParam92 = 0;
            int32_t sjt_functionParam93;
            sjs_json_value value = { -1 };
            sjs_tuple2_i32_value valueresult = { -1 };

            sjt_funcold10 = index;
            sjt_functionParam92 = s;
            sjt_functionParam93 = index;
            sjf_json_parse_whitespace(sjt_functionParam92, sjt_functionParam93, &sjt_funcold10);
            index = sjt_funcold10;
            if (isfirst) {
                bool sjt_capture32;

                isfirst = false;
                if (index < s->count) {
                    char sjt_capture33;
                    int32_t sjt_functionParam94;
                    sjs_string* sjt_parent53 = 0;

                    sjt_parent53 = s;
                    sjt_functionParam94 = index;
                    sjf_string_getat(sjt_parent53, sjt_functionParam94, &sjt_capture33);
                    sjt_capture32 = (sjt_capture33 == '}');
                } else {
                    sjt_capture32 = false;
                }

                if (sjt_capture32) {
                    index = index + 1;
                    shouldcontinue = false;
                }
            } else {
                char sjt_capture34;
                int32_t sjt_functionParam95;
                sjs_string* sjt_parent54 = 0;

                sjt_parent54 = s;
                sjt_functionParam95 = index;
                sjf_string_getat(sjt_parent54, sjt_functionParam95, &sjt_capture34);
                if (sjt_capture34 == ',') {
                    int32_t sjt_funcold11;
                    sjs_string* sjt_functionParam96 = 0;
                    int32_t sjt_functionParam97;

                    index = index + 1;
                    sjt_funcold11 = index;
                    sjt_functionParam96 = s;
                    sjt_functionParam97 = index;
                    sjf_json_parse_whitespace(sjt_functionParam96, sjt_functionParam97, &sjt_funcold11);
                    index = sjt_funcold11;
                } else {
                    index = s->count + 1;
                }
            }

            if (shouldcontinue) {
                bool sjt_capture35;

                if (index < s->count) {
                    char sjt_capture36;
                    int32_t sjt_functionParam98;
                    sjs_string* sjt_parent55 = 0;

                    sjt_parent55 = s;
                    sjt_functionParam98 = index;
                    sjf_string_getat(sjt_parent55, sjt_functionParam98, &sjt_capture36);
                    sjt_capture35 = (sjt_capture36 == '\"');
                } else {
                    sjt_capture35 = false;
                }

                if (sjt_capture35) {
                    char sjt_capture37;
                    bool sjt_capture38;
                    int32_t sjt_funcold12;
                    int32_t sjt_funcold13;
                    int32_t sjt_funcold14;
                    int32_t sjt_functionParam100;
                    sjs_string* sjt_functionParam103 = 0;
                    int32_t sjt_functionParam104;
                    int32_t sjt_functionParam105;
                    sjs_string* sjt_functionParam106 = 0;
                    int32_t sjt_functionParam107;
                    sjs_string* sjt_functionParam108 = 0;
                    int32_t sjt_functionParam109;
                    sjs_string* sjt_functionParam110 = 0;
                    sjs_json_value* sjt_functionParam111 = 0;
                    sjs_string* sjt_functionParam112 = 0;
                    int32_t sjt_functionParam113;
                    sjs_string* sjt_functionParam99 = 0;
                    sjs_string* sjt_parent57 = 0;
                    sjs_hash_string_value* sjt_parent58 = 0;

                    sjt_functionParam99 = s;
                    sjt_functionParam100 = index;
                    sjf_json_parse_string(sjt_functionParam99, sjt_functionParam100, &keyresult);
                    index = (&keyresult)->item1 + 1;
                    if ((&(&keyresult)->item2)->count > 0) {
                        int32_t sjt_functionParam101;
                        int32_t sjt_functionParam102;
                        sjs_string* sjt_parent56 = 0;

                        sjt_parent56 = &(&keyresult)->item2;
                        sjt_functionParam101 = 1;
                        sjt_functionParam102 = (&(&keyresult)->item2)->count - 2;
                        sjf_string_substr(sjt_parent56, sjt_functionParam101, sjt_functionParam102, &key);
                    } else {
                        key._refCount = 1;
                        key.offset = 0;
                        key.count = 0;
                        key.data._refCount = 1;
                        key.data.v = &sjg_string1;
                        sjf_array_char(&key.data);
                        key._isnullterminated = false;
                        sjf_string(&key);
                    }

                    sjt_funcold12 = index;
                    sjt_functionParam103 = s;
                    sjt_functionParam104 = index;
                    sjf_json_parse_whitespace(sjt_functionParam103, sjt_functionParam104, &sjt_funcold12);
                    index = sjt_funcold12;
                    sjt_parent57 = s;
                    sjt_functionParam105 = index;
                    sjf_string_getat(sjt_parent57, sjt_functionParam105, &sjt_capture37);
                    if (sjt_capture37 == ':') {
                        index = index + 1;
                    } else {
                        index = s->count + 1;
                    }

                    sjt_funcold13 = index;
                    sjt_functionParam106 = s;
                    sjt_functionParam107 = index;
                    sjf_json_parse_whitespace(sjt_functionParam106, sjt_functionParam107, &sjt_funcold13);
                    index = sjt_funcold13;
                    sjt_functionParam108 = s;
                    sjt_functionParam109 = index;
                    sjf_json_parse_value(sjt_functionParam108, sjt_functionParam109, &valueresult);
                    index = (&valueresult)->item1;
                    value._refCount = 1;
                    sjf_json_value_copy(&value, &(&valueresult)->item2);
                    sjt_parent58 = &h;
                    sjt_functionParam110 = &key;
                    sjt_functionParam111 = &value;
                    sjf_hash_string_value_setat(sjt_parent58, sjt_functionParam110, sjt_functionParam111);
                    sjt_funcold14 = index;
                    sjt_functionParam112 = s;
                    sjt_functionParam113 = index;
                    sjf_json_parse_whitespace(sjt_functionParam112, sjt_functionParam113, &sjt_funcold14);
                    index = sjt_funcold14;
                    if (index < s->count) {
                        char sjt_capture39;
                        int32_t sjt_functionParam114;
                        sjs_string* sjt_parent59 = 0;

                        sjt_parent59 = s;
                        sjt_functionParam114 = index;
                        sjf_string_getat(sjt_parent59, sjt_functionParam114, &sjt_capture39);
                        sjt_capture38 = (sjt_capture39 == '}');
                    } else {
                        sjt_capture38 = false;
                    }

                    if (sjt_capture38) {
                        index = index + 1;
                        shouldcontinue = false;
                    }
                } else {
                    index = s->count + 1;
                }
            }

            if (index < s->count) {
                sjt_while8 = shouldcontinue;
            } else {
                sjt_while8 = false;
            }

            if (key._refCount == 1) { sjf_string_destroy(&key); }
;
            if (keyresult._refCount == 1) { sjf_tuple2_i32_string_destroy(&keyresult); }
;
            if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
            if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
        }

        sjt_call6._refCount = 1;
        sjt_call6.item1 = index;
        sjt_call6.item2._refCount = 1;
        sjt_call6.item2.s._refCount = -1;
        sjt_call6.item2.a._refCount = -1;
        sjs_hash_string_value* copyoption21 = &h;
        if (copyoption21 != 0) {
            sjt_call6.item2.h._refCount = 1;
            sjf_hash_string_value_copy(&sjt_call6.item2.h, copyoption21);
        } else {
            sjt_call6.item2.h._refCount = -1;
        }

        sjf_json_value(&sjt_call6.item2);
        sjf_tuple2_i32_value(&sjt_call6);
        (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
        (*_return)->_refCount = 1;
        sjf_tuple2_i32_value_copy((*_return), &sjt_call6);

        if (h._refCount == 1) { sjf_hash_string_value_destroy(&h); }
;
        if (sjt_call6._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call6); }
;
    } else {
        if (underscore2 == '[') {
            bool isfirst;
            sjs_list_value l = { -1 };
            bool shouldcontinue;
            sjs_tuple2_i32_value sjt_call10 = { -1 };
            bool sjt_while9;

            l._refCount = 1;
            l.arr._refCount = 1;
            l.arr.v = 0;
            sjf_array_value(&l.arr);
            sjf_list_value(&l);
            index = index + 1;
            isfirst = true;
            shouldcontinue = true;
            if (index < s->count) {
                sjt_while9 = shouldcontinue;
            } else {
                sjt_while9 = false;
            }

            while (sjt_while9) {
                sjs_string sjt_call7 = { -1 };
                sjs_string sjt_call8 = { -1 };
                sjs_string sjt_call9 = { -1 };
                bool sjt_capture43;
                int32_t sjt_funcold15;
                int32_t sjt_funcold16;
                sjs_string* sjt_functionParam115 = 0;
                int32_t sjt_functionParam116;
                sjs_string* sjt_functionParam117 = 0;
                sjs_string* sjt_functionParam118 = 0;
                int32_t sjt_functionParam119;
                int32_t sjt_functionParam120;
                sjs_string* sjt_functionParam123 = 0;
                int32_t sjt_functionParam124;
                sjs_json_value* sjt_functionParam125 = 0;
                sjs_string* sjt_functionParam126 = 0;
                int32_t sjt_functionParam127;
                sjs_string* sjt_parent60 = 0;
                sjs_string* sjt_parent61 = 0;
                sjs_list_value* sjt_parent64 = 0;
                sjs_json_value value = { -1 };
                sjs_tuple2_i32_value valueresult = { -1 };

                sjt_funcold15 = index;
                sjt_functionParam115 = s;
                sjt_functionParam116 = index;
                sjf_json_parse_whitespace(sjt_functionParam115, sjt_functionParam116, &sjt_funcold15);
                index = sjt_funcold15;
                sjt_call8._refCount = 1;
                sjt_call8.offset = 0;
                sjt_call8.count = 12;
                sjt_call8.data._refCount = 1;
                sjt_call8.data.v = &sjg_string3;
                sjf_array_char(&sjt_call8.data);
                sjt_call8._isnullterminated = false;
                sjf_string(&sjt_call8);
                sjt_parent60 = &sjt_call8;
                sjt_parent61 = s;
                sjt_functionParam119 = index;
                sjt_functionParam120 = s->count - index;
                sjf_string_substr(sjt_parent61, sjt_functionParam119, sjt_functionParam120, &sjt_call9);
                sjt_functionParam118 = &sjt_call9;
                sjf_string_add(sjt_parent60, sjt_functionParam118, &sjt_call7);
                sjt_functionParam117 = &sjt_call7;
                sjf_debug_writeline(sjt_functionParam117);
                if (isfirst) {
                    bool sjt_capture40;

                    isfirst = false;
                    if (index < s->count) {
                        char sjt_capture41;
                        int32_t sjt_functionParam121;
                        sjs_string* sjt_parent62 = 0;

                        sjt_parent62 = s;
                        sjt_functionParam121 = index;
                        sjf_string_getat(sjt_parent62, sjt_functionParam121, &sjt_capture41);
                        sjt_capture40 = (sjt_capture41 == ']');
                    } else {
                        sjt_capture40 = false;
                    }

                    if (sjt_capture40) {
                        index = index + 1;
                        shouldcontinue = false;
                    }
                } else {
                    char sjt_capture42;
                    int32_t sjt_functionParam122;
                    sjs_string* sjt_parent63 = 0;

                    sjt_parent63 = s;
                    sjt_functionParam122 = index;
                    sjf_string_getat(sjt_parent63, sjt_functionParam122, &sjt_capture42);
                    if (sjt_capture42 == ',') {
                        index = index + 1;
                    } else {
                        index = s->count + 1;
                    }
                }

                sjt_functionParam123 = s;
                sjt_functionParam124 = index;
                sjf_json_parse_value(sjt_functionParam123, sjt_functionParam124, &valueresult);
                index = (&valueresult)->item1;
                value._refCount = 1;
                sjf_json_value_copy(&value, &(&valueresult)->item2);
                sjt_parent64 = &l;
                sjt_functionParam125 = &value;
                sjf_list_value_add(sjt_parent64, sjt_functionParam125);
                sjt_funcold16 = index;
                sjt_functionParam126 = s;
                sjt_functionParam127 = index;
                sjf_json_parse_whitespace(sjt_functionParam126, sjt_functionParam127, &sjt_funcold16);
                index = sjt_funcold16;
                if (index < s->count) {
                    char sjt_capture44;
                    int32_t sjt_functionParam128;
                    sjs_string* sjt_parent65 = 0;

                    sjt_parent65 = s;
                    sjt_functionParam128 = index;
                    sjf_string_getat(sjt_parent65, sjt_functionParam128, &sjt_capture44);
                    sjt_capture43 = (sjt_capture44 == ']');
                } else {
                    sjt_capture43 = false;
                }

                if (sjt_capture43) {
                    index = index + 1;
                    shouldcontinue = false;
                }

                if (index < s->count) {
                    sjt_while9 = shouldcontinue;
                } else {
                    sjt_while9 = false;
                }

                if (sjt_call7._refCount == 1) { sjf_string_destroy(&sjt_call7); }
;
                if (sjt_call8._refCount == 1) { sjf_string_destroy(&sjt_call8); }
;
                if (sjt_call9._refCount == 1) { sjf_string_destroy(&sjt_call9); }
;
                if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
                if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
            }

            sjt_call10._refCount = 1;
            sjt_call10.item1 = index;
            sjt_call10.item2._refCount = 1;
            sjt_call10.item2.s._refCount = -1;
            sjs_array_value* copyoption22 = &(&l)->arr;
            if (copyoption22 != 0) {
                sjt_call10.item2.a._refCount = 1;
                sjf_array_value_copy(&sjt_call10.item2.a, copyoption22);
            } else {
                sjt_call10.item2.a._refCount = -1;
            }

            sjt_call10.item2.h._refCount = -1;
            sjf_json_value(&sjt_call10.item2);
            sjf_tuple2_i32_value(&sjt_call10);
            (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
            (*_return)->_refCount = 1;
            sjf_tuple2_i32_value_copy((*_return), &sjt_call10);

            if (l._refCount == 1) { sjf_list_value_destroy(&l); }
;
            if (sjt_call10._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call10); }
;
        } else {
            if (underscore2 == '\"') {
                sjs_tuple2_i32_string result = { -1 };
                sjs_tuple2_i32_value sjt_call11 = { -1 };
                sjs_string* sjt_functionParam129 = 0;
                int32_t sjt_functionParam130;

                sjt_functionParam129 = s;
                sjt_functionParam130 = index;
                sjf_json_parse_string(sjt_functionParam129, sjt_functionParam130, &result);
                sjt_call11._refCount = 1;
                sjt_call11.item1 = (&result)->item1;
                sjt_call11.item2._refCount = 1;
                sjs_string* copyoption23 = &(&result)->item2;
                if (copyoption23 != 0) {
                    sjt_call11.item2.s._refCount = 1;
                    sjf_string_copy(&sjt_call11.item2.s, copyoption23);
                } else {
                    sjt_call11.item2.s._refCount = -1;
                }

                sjt_call11.item2.a._refCount = -1;
                sjt_call11.item2.h._refCount = -1;
                sjf_json_value(&sjt_call11.item2);
                sjf_tuple2_i32_value(&sjt_call11);
                (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
                (*_return)->_refCount = 1;
                sjf_tuple2_i32_value_copy((*_return), &sjt_call11);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
                if (sjt_call11._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call11); }
;
            } else {
                sjs_tuple2_i32_string result = { -1 };
                sjs_tuple2_i32_value sjt_call12 = { -1 };
                sjs_string* sjt_functionParam131 = 0;
                int32_t sjt_functionParam132;

                sjt_functionParam131 = s;
                sjt_functionParam132 = index;
                sjf_json_parse_number(sjt_functionParam131, sjt_functionParam132, &result);
                sjt_call12._refCount = 1;
                sjt_call12.item1 = (&result)->item1;
                sjt_call12.item2._refCount = 1;
                sjs_string* copyoption24 = &(&result)->item2;
                if (copyoption24 != 0) {
                    sjt_call12.item2.s._refCount = 1;
                    sjf_string_copy(&sjt_call12.item2.s, copyoption24);
                } else {
                    sjt_call12.item2.s._refCount = -1;
                }

                sjt_call12.item2.a._refCount = -1;
                sjt_call12.item2.h._refCount = -1;
                sjf_json_value(&sjt_call12.item2);
                sjf_tuple2_i32_value(&sjt_call12);
                (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
                (*_return)->_refCount = 1;
                sjf_tuple2_i32_value_copy((*_return), &sjt_call12);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
                if (sjt_call12._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call12); }
;
            }
        }
    }
}

void sjf_json_parse_whitespace(sjs_string* s, int32_t startindex, int32_t* _return) {
    int32_t index;
    bool ismatched;
    bool sjt_while1;

    index = startindex;
    ismatched = true;
    if (index < s->count) {
        sjt_while1 = ismatched;
    } else {
        sjt_while1 = false;
    }

    while (sjt_while1) {
        char ch;
        int32_t sjt_functionParam5;
        sjs_string* sjt_parent4 = 0;

        sjt_parent4 = s;
        sjt_functionParam5 = index;
        sjf_string_getat(sjt_parent4, sjt_functionParam5, &ch);
        if ((ch == '\r') || ((ch == '\n') || ((ch == '\t') || (ch == (' '))))) {
            index = index + 1;
        } else {
            ismatched = false;
        }

        if (index < s->count) {
            sjt_while1 = ismatched;
        } else {
            sjt_while1 = false;
        }
    }

    (*_return) = index;
}

void sjf_json_value(sjs_json_value* _this) {
}

void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from) {
    sjs_string* copyoption14 = (_from->s._refCount != -1 ? &_from->s : 0);
    if (copyoption14 != 0) {
        _this->s._refCount = 1;
        sjf_string_copy(&_this->s, copyoption14);
    } else {
        _this->s._refCount = -1;
    }

    sjs_array_value* copyoption15 = (_from->a._refCount != -1 ? &_from->a : 0);
    if (copyoption15 != 0) {
        _this->a._refCount = 1;
        sjf_array_value_copy(&_this->a, copyoption15);
    } else {
        _this->a._refCount = -1;
    }

    sjs_hash_string_value* copyoption16 = (_from->h._refCount != -1 ? &_from->h : 0);
    if (copyoption16 != 0) {
        _this->h._refCount = 1;
        sjf_hash_string_value_copy(&_this->h, copyoption16);
    } else {
        _this->h._refCount = -1;
    }
}

void sjf_json_value_destroy(sjs_json_value* _this) {
    if (_this->s._refCount == 1) { sjf_string_destroy(&_this->s); }
;
    if (_this->a._refCount == 1) { sjf_array_value_destroy(&_this->a); }
;
    if (_this->h._refCount == 1) { sjf_hash_string_value_destroy(&_this->h); }
;
}

void sjf_json_value_heap(sjs_json_value* _this) {
}

void sjf_json_value_render(sjs_json_value* _parent, sjs_string* _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue2 = 0;

        ifValue2 = (_parent->s._refCount != -1 ? &_parent->s : 0);
        _return->_refCount = 1;
        sjf_string_copy(_return, ifValue2);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue3 = 0;
            sjs_string sjt_call24 = { -1 };
            sjs_string sjt_call25 = { -1 };
            sjs_string sjt_call26 = { -1 };
            sjs_array_string sjt_call31 = { -1 };
            sjs_lambda3 sjt_call34 = { -1 };
            sjs_string sjt_call35 = { -1 };
            sjs_string sjt_call36 = { -1 };
            sjs_string* sjt_functionParam153 = 0;
            cb_value_string sjt_functionParam164;
            sjs_string* sjt_functionParam165 = 0;
            sjs_string* sjt_functionParam166 = 0;
            sjs_string* sjt_parent70 = 0;
            sjs_string* sjt_parent71 = 0;
            sjs_array_string* sjt_parent78 = 0;
            sjs_array_value* sjt_parent79 = 0;

            ifValue3 = (_parent->a._refCount != -1 ? &_parent->a : 0);
            sjt_call25._refCount = 1;
            sjt_call25.offset = 0;
            sjt_call25.count = 2;
            sjt_call25.data._refCount = 1;
            sjt_call25.data.v = &sjg_string11;
            sjf_array_char(&sjt_call25.data);
            sjt_call25._isnullterminated = false;
            sjf_string(&sjt_call25);
            sjt_parent71 = &sjt_call25;
            sjt_parent79 = ifValue3;
            sjs_lambda3* lambainit4;
            sjt_call34._refCount = 1;
            sjf_lambda3(&sjt_call34);
            lambainit4 = &sjt_call34;
            sjt_functionParam164._parent = (sjs_object*)lambainit4;
            sjt_functionParam164._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda3_invoke;
            sjf_array_value_map_string(sjt_parent79, sjt_functionParam164, &sjt_call31);
            sjt_parent78 = &sjt_call31;
            sjt_call35._refCount = 1;
            sjt_call35.offset = 0;
            sjt_call35.count = 2;
            sjt_call35.data._refCount = 1;
            sjt_call35.data.v = &sjg_string9;
            sjf_array_char(&sjt_call35.data);
            sjt_call35._isnullterminated = false;
            sjf_string(&sjt_call35);
            sjt_functionParam165 = &sjt_call35;
            sjf_array_string_asstring(sjt_parent78, sjt_functionParam165, &sjt_call26);
            sjt_functionParam153 = &sjt_call26;
            sjf_string_add(sjt_parent71, sjt_functionParam153, &sjt_call24);
            sjt_parent70 = &sjt_call24;
            sjt_call36._refCount = 1;
            sjt_call36.offset = 0;
            sjt_call36.count = 2;
            sjt_call36.data._refCount = 1;
            sjt_call36.data.v = &sjg_string12;
            sjf_array_char(&sjt_call36.data);
            sjt_call36._isnullterminated = false;
            sjf_string(&sjt_call36);
            sjt_functionParam166 = &sjt_call36;
            sjf_string_add(sjt_parent70, sjt_functionParam166, _return);

            if (sjt_call24._refCount == 1) { sjf_string_destroy(&sjt_call24); }
;
            if (sjt_call25._refCount == 1) { sjf_string_destroy(&sjt_call25); }
;
            if (sjt_call26._refCount == 1) { sjf_string_destroy(&sjt_call26); }
;
            if (sjt_call31._refCount == 1) { sjf_array_string_destroy(&sjt_call31); }
;
            if (sjt_call34._refCount == 1) { sjf_lambda3_destroy(&sjt_call34); }
;
            if (sjt_call35._refCount == 1) { sjf_string_destroy(&sjt_call35); }
;
            if (sjt_call36._refCount == 1) { sjf_string_destroy(&sjt_call36); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue4 = 0;
                sjs_string sjt_call37 = { -1 };
                sjs_string sjt_call38 = { -1 };
                sjs_string sjt_call39 = { -1 };
                sjs_array_string sjt_call40 = { -1 };
                sjs_lambda2 sjt_call44 = { -1 };
                sjs_string sjt_call55 = { -1 };
                sjs_string sjt_call56 = { -1 };
                sjs_string* sjt_functionParam167 = 0;
                cb_string_value_string sjt_functionParam180;
                sjs_string* sjt_functionParam187 = 0;
                sjs_string* sjt_functionParam188 = 0;
                sjs_string* sjt_parent82 = 0;
                sjs_string* sjt_parent83 = 0;
                sjs_array_string* sjt_parent84 = 0;
                sjs_hash_string_value* sjt_parent93 = 0;

                ifValue4 = (_parent->h._refCount != -1 ? &_parent->h : 0);
                sjt_call38._refCount = 1;
                sjt_call38.offset = 0;
                sjt_call38.count = 2;
                sjt_call38.data._refCount = 1;
                sjt_call38.data.v = &sjg_string6;
                sjf_array_char(&sjt_call38.data);
                sjt_call38._isnullterminated = false;
                sjf_string(&sjt_call38);
                sjt_parent83 = &sjt_call38;
                sjt_parent93 = ifValue4;
                sjs_lambda2* lambainit3;
                sjt_call44._refCount = 1;
                sjf_lambda2(&sjt_call44);
                lambainit3 = &sjt_call44;
                sjt_functionParam180._parent = (sjs_object*)lambainit3;
                sjt_functionParam180._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda2_invoke;
                sjf_hash_string_value_asarray_string(sjt_parent93, sjt_functionParam180, &sjt_call40);
                sjt_parent84 = &sjt_call40;
                sjt_call55._refCount = 1;
                sjt_call55.offset = 0;
                sjt_call55.count = 2;
                sjt_call55.data._refCount = 1;
                sjt_call55.data.v = &sjg_string9;
                sjf_array_char(&sjt_call55.data);
                sjt_call55._isnullterminated = false;
                sjf_string(&sjt_call55);
                sjt_functionParam187 = &sjt_call55;
                sjf_array_string_asstring(sjt_parent84, sjt_functionParam187, &sjt_call39);
                sjt_functionParam167 = &sjt_call39;
                sjf_string_add(sjt_parent83, sjt_functionParam167, &sjt_call37);
                sjt_parent82 = &sjt_call37;
                sjt_call56._refCount = 1;
                sjt_call56.offset = 0;
                sjt_call56.count = 2;
                sjt_call56.data._refCount = 1;
                sjt_call56.data.v = &sjg_string10;
                sjf_array_char(&sjt_call56.data);
                sjt_call56._isnullterminated = false;
                sjf_string(&sjt_call56);
                sjt_functionParam188 = &sjt_call56;
                sjf_string_add(sjt_parent82, sjt_functionParam188, _return);

                if (sjt_call37._refCount == 1) { sjf_string_destroy(&sjt_call37); }
;
                if (sjt_call38._refCount == 1) { sjf_string_destroy(&sjt_call38); }
;
                if (sjt_call39._refCount == 1) { sjf_string_destroy(&sjt_call39); }
;
                if (sjt_call40._refCount == 1) { sjf_array_string_destroy(&sjt_call40); }
;
                if (sjt_call44._refCount == 1) { sjf_lambda2_destroy(&sjt_call44); }
;
                if (sjt_call55._refCount == 1) { sjf_string_destroy(&sjt_call55); }
;
                if (sjt_call56._refCount == 1) { sjf_string_destroy(&sjt_call56); }
;
            } else {
                _return->_refCount = 1;
                _return->offset = 0;
                _return->count = 0;
                _return->data._refCount = 1;
                _return->data.v = &sjg_string1;
                sjf_array_char(&_return->data);
                _return->_isnullterminated = false;
                sjf_string(_return);
            }
        }
    }
}

void sjf_json_value_render_heap(sjs_json_value* _parent, sjs_string** _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue5 = 0;

        ifValue5 = (_parent->s._refCount != -1 ? &_parent->s : 0);
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
        sjf_string_copy((*_return), ifValue5);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue6 = 0;
            sjs_string sjt_call57 = { -1 };
            sjs_string sjt_call58 = { -1 };
            sjs_string sjt_call59 = { -1 };
            sjs_array_string sjt_call60 = { -1 };
            sjs_lambda3 sjt_call61 = { -1 };
            sjs_string sjt_call62 = { -1 };
            sjs_string sjt_call63 = { -1 };
            sjs_string* sjt_functionParam189 = 0;
            cb_value_string sjt_functionParam190;
            sjs_string* sjt_functionParam191 = 0;
            sjs_string* sjt_functionParam192 = 0;
            sjs_string* sjt_parent102 = 0;
            sjs_string* sjt_parent103 = 0;
            sjs_array_string* sjt_parent104 = 0;
            sjs_array_value* sjt_parent105 = 0;

            ifValue6 = (_parent->a._refCount != -1 ? &_parent->a : 0);
            sjt_call58._refCount = 1;
            sjt_call58.offset = 0;
            sjt_call58.count = 2;
            sjt_call58.data._refCount = 1;
            sjt_call58.data.v = &sjg_string11;
            sjf_array_char(&sjt_call58.data);
            sjt_call58._isnullterminated = false;
            sjf_string(&sjt_call58);
            sjt_parent103 = &sjt_call58;
            sjt_parent105 = ifValue6;
            sjs_lambda3* lambainit6;
            sjt_call61._refCount = 1;
            sjf_lambda3(&sjt_call61);
            lambainit6 = &sjt_call61;
            sjt_functionParam190._parent = (sjs_object*)lambainit6;
            sjt_functionParam190._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda3_invoke;
            sjf_array_value_map_string(sjt_parent105, sjt_functionParam190, &sjt_call60);
            sjt_parent104 = &sjt_call60;
            sjt_call62._refCount = 1;
            sjt_call62.offset = 0;
            sjt_call62.count = 2;
            sjt_call62.data._refCount = 1;
            sjt_call62.data.v = &sjg_string9;
            sjf_array_char(&sjt_call62.data);
            sjt_call62._isnullterminated = false;
            sjf_string(&sjt_call62);
            sjt_functionParam191 = &sjt_call62;
            sjf_array_string_asstring(sjt_parent104, sjt_functionParam191, &sjt_call59);
            sjt_functionParam189 = &sjt_call59;
            sjf_string_add(sjt_parent103, sjt_functionParam189, &sjt_call57);
            sjt_parent102 = &sjt_call57;
            sjt_call63._refCount = 1;
            sjt_call63.offset = 0;
            sjt_call63.count = 2;
            sjt_call63.data._refCount = 1;
            sjt_call63.data.v = &sjg_string12;
            sjf_array_char(&sjt_call63.data);
            sjt_call63._isnullterminated = false;
            sjf_string(&sjt_call63);
            sjt_functionParam192 = &sjt_call63;
            sjf_string_add_heap(sjt_parent102, sjt_functionParam192, _return);

            if (sjt_call57._refCount == 1) { sjf_string_destroy(&sjt_call57); }
;
            if (sjt_call58._refCount == 1) { sjf_string_destroy(&sjt_call58); }
;
            if (sjt_call59._refCount == 1) { sjf_string_destroy(&sjt_call59); }
;
            if (sjt_call60._refCount == 1) { sjf_array_string_destroy(&sjt_call60); }
;
            if (sjt_call61._refCount == 1) { sjf_lambda3_destroy(&sjt_call61); }
;
            if (sjt_call62._refCount == 1) { sjf_string_destroy(&sjt_call62); }
;
            if (sjt_call63._refCount == 1) { sjf_string_destroy(&sjt_call63); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue7 = 0;
                sjs_string sjt_call64 = { -1 };
                sjs_string sjt_call65 = { -1 };
                sjs_string sjt_call66 = { -1 };
                sjs_array_string sjt_call67 = { -1 };
                sjs_lambda2 sjt_call68 = { -1 };
                sjs_string sjt_call69 = { -1 };
                sjs_string sjt_call70 = { -1 };
                sjs_string* sjt_functionParam193 = 0;
                cb_string_value_string sjt_functionParam194;
                sjs_string* sjt_functionParam195 = 0;
                sjs_string* sjt_functionParam196 = 0;
                sjs_string* sjt_parent106 = 0;
                sjs_string* sjt_parent107 = 0;
                sjs_array_string* sjt_parent108 = 0;
                sjs_hash_string_value* sjt_parent109 = 0;

                ifValue7 = (_parent->h._refCount != -1 ? &_parent->h : 0);
                sjt_call65._refCount = 1;
                sjt_call65.offset = 0;
                sjt_call65.count = 2;
                sjt_call65.data._refCount = 1;
                sjt_call65.data.v = &sjg_string6;
                sjf_array_char(&sjt_call65.data);
                sjt_call65._isnullterminated = false;
                sjf_string(&sjt_call65);
                sjt_parent107 = &sjt_call65;
                sjt_parent109 = ifValue7;
                sjs_lambda2* lambainit5;
                sjt_call68._refCount = 1;
                sjf_lambda2(&sjt_call68);
                lambainit5 = &sjt_call68;
                sjt_functionParam194._parent = (sjs_object*)lambainit5;
                sjt_functionParam194._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda2_invoke;
                sjf_hash_string_value_asarray_string(sjt_parent109, sjt_functionParam194, &sjt_call67);
                sjt_parent108 = &sjt_call67;
                sjt_call69._refCount = 1;
                sjt_call69.offset = 0;
                sjt_call69.count = 2;
                sjt_call69.data._refCount = 1;
                sjt_call69.data.v = &sjg_string9;
                sjf_array_char(&sjt_call69.data);
                sjt_call69._isnullterminated = false;
                sjf_string(&sjt_call69);
                sjt_functionParam195 = &sjt_call69;
                sjf_array_string_asstring(sjt_parent108, sjt_functionParam195, &sjt_call66);
                sjt_functionParam193 = &sjt_call66;
                sjf_string_add(sjt_parent107, sjt_functionParam193, &sjt_call64);
                sjt_parent106 = &sjt_call64;
                sjt_call70._refCount = 1;
                sjt_call70.offset = 0;
                sjt_call70.count = 2;
                sjt_call70.data._refCount = 1;
                sjt_call70.data.v = &sjg_string10;
                sjf_array_char(&sjt_call70.data);
                sjt_call70._isnullterminated = false;
                sjf_string(&sjt_call70);
                sjt_functionParam196 = &sjt_call70;
                sjf_string_add_heap(sjt_parent106, sjt_functionParam196, _return);

                if (sjt_call64._refCount == 1) { sjf_string_destroy(&sjt_call64); }
;
                if (sjt_call65._refCount == 1) { sjf_string_destroy(&sjt_call65); }
;
                if (sjt_call66._refCount == 1) { sjf_string_destroy(&sjt_call66); }
;
                if (sjt_call67._refCount == 1) { sjf_array_string_destroy(&sjt_call67); }
;
                if (sjt_call68._refCount == 1) { sjf_lambda2_destroy(&sjt_call68); }
;
                if (sjt_call69._refCount == 1) { sjf_string_destroy(&sjt_call69); }
;
                if (sjt_call70._refCount == 1) { sjf_string_destroy(&sjt_call70); }
;
            } else {
                (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
                (*_return)->_refCount = 1;
                (*_return)->offset = 0;
                (*_return)->count = 0;
                (*_return)->data._refCount = 1;
                (*_return)->data.v = &sjg_string1;
                sjf_array_char(&(*_return)->data);
                (*_return)->_isnullterminated = false;
                sjf_string_heap((*_return));
            }
        }
    }
}

void sjf_lambda1(sjs_lambda1* _this) {
}

void sjf_lambda1_copy(sjs_lambda1* _this, sjs_lambda1* _from) {
    _this->lambdaparam1 = _from->lambdaparam1;
    _this->lambdaparam2 = _from->lambdaparam2;
    _this->lambdaparam3 = _from->lambdaparam3;
}

void sjf_lambda1_destroy(sjs_lambda1* _this) {
}

void sjf_lambda1_heap(sjs_lambda1* _this) {
}

void sjf_lambda1_invoke(sjs_lambda1* _parent, sjs_string* _1, sjs_json_value* _2) {
    sjs_string sjt_call42 = { -1 };
    sjs_string* sjt_functionParam176 = 0;
    sjs_string* sjt_functionParam177 = 0;
    sjs_json_value* sjt_functionParam178 = 0;
    sjs_list_string* sjt_parent92 = 0;

    sjt_parent92 = _parent->lambdaparam1;
    sjt_functionParam177 = _1;
    sjt_functionParam178 = _2;
    _parent->lambdaparam2._cb(_parent->lambdaparam2._parent, sjt_functionParam177, sjt_functionParam178, &sjt_call42);
    sjt_functionParam176 = &sjt_call42;
    sjf_list_string_add(sjt_parent92, sjt_functionParam176);

    if (sjt_call42._refCount == 1) { sjf_string_destroy(&sjt_call42); }
;
}

void sjf_lambda2(sjs_lambda2* _this) {
}

void sjf_lambda2_copy(sjs_lambda2* _this, sjs_lambda2* _from) {
}

void sjf_lambda2_destroy(sjs_lambda2* _this) {
}

void sjf_lambda2_heap(sjs_lambda2* _this) {
}

void sjf_lambda2_invoke(sjs_lambda2* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string* _return) {
    sjs_string sjt_call45 = { -1 };
    sjs_string sjt_call46 = { -1 };
    sjs_string sjt_call47 = { -1 };
    sjs_string sjt_call48 = { -1 };
    sjs_string sjt_call49 = { -1 };
    sjs_string* sjt_functionParam181 = 0;
    sjs_string* sjt_functionParam182 = 0;
    sjs_string* sjt_functionParam183 = 0;
    sjs_string* sjt_parent94 = 0;
    sjs_string* sjt_parent95 = 0;
    sjs_string* sjt_parent96 = 0;
    sjs_json_value* sjt_parent97 = 0;

    sjt_call47._refCount = 1;
    sjt_call47.offset = 0;
    sjt_call47.count = 1;
    sjt_call47.data._refCount = 1;
    sjt_call47.data.v = &sjg_string7;
    sjf_array_char(&sjt_call47.data);
    sjt_call47._isnullterminated = false;
    sjf_string(&sjt_call47);
    sjt_parent96 = &sjt_call47;
    sjt_functionParam181 = _1;
    sjf_string_add(sjt_parent96, sjt_functionParam181, &sjt_call46);
    sjt_parent95 = &sjt_call46;
    sjt_call48._refCount = 1;
    sjt_call48.offset = 0;
    sjt_call48.count = 4;
    sjt_call48.data._refCount = 1;
    sjt_call48.data.v = &sjg_string8;
    sjf_array_char(&sjt_call48.data);
    sjt_call48._isnullterminated = false;
    sjf_string(&sjt_call48);
    sjt_functionParam182 = &sjt_call48;
    sjf_string_add(sjt_parent95, sjt_functionParam182, &sjt_call45);
    sjt_parent94 = &sjt_call45;
    sjt_parent97 = _2;
    sjf_json_value_render(sjt_parent97, &sjt_call49);
    sjt_functionParam183 = &sjt_call49;
    sjf_string_add(sjt_parent94, sjt_functionParam183, _return);

    if (sjt_call45._refCount == 1) { sjf_string_destroy(&sjt_call45); }
;
    if (sjt_call46._refCount == 1) { sjf_string_destroy(&sjt_call46); }
;
    if (sjt_call47._refCount == 1) { sjf_string_destroy(&sjt_call47); }
;
    if (sjt_call48._refCount == 1) { sjf_string_destroy(&sjt_call48); }
;
    if (sjt_call49._refCount == 1) { sjf_string_destroy(&sjt_call49); }
;
}

void sjf_lambda2_invoke_heap(sjs_lambda2* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string** _return) {
    sjs_string sjt_call50 = { -1 };
    sjs_string sjt_call51 = { -1 };
    sjs_string sjt_call52 = { -1 };
    sjs_string sjt_call53 = { -1 };
    sjs_string sjt_call54 = { -1 };
    sjs_string* sjt_functionParam184 = 0;
    sjs_string* sjt_functionParam185 = 0;
    sjs_string* sjt_functionParam186 = 0;
    sjs_string* sjt_parent100 = 0;
    sjs_json_value* sjt_parent101 = 0;
    sjs_string* sjt_parent98 = 0;
    sjs_string* sjt_parent99 = 0;

    sjt_call52._refCount = 1;
    sjt_call52.offset = 0;
    sjt_call52.count = 1;
    sjt_call52.data._refCount = 1;
    sjt_call52.data.v = &sjg_string7;
    sjf_array_char(&sjt_call52.data);
    sjt_call52._isnullterminated = false;
    sjf_string(&sjt_call52);
    sjt_parent100 = &sjt_call52;
    sjt_functionParam184 = _1;
    sjf_string_add(sjt_parent100, sjt_functionParam184, &sjt_call51);
    sjt_parent99 = &sjt_call51;
    sjt_call53._refCount = 1;
    sjt_call53.offset = 0;
    sjt_call53.count = 4;
    sjt_call53.data._refCount = 1;
    sjt_call53.data.v = &sjg_string8;
    sjf_array_char(&sjt_call53.data);
    sjt_call53._isnullterminated = false;
    sjf_string(&sjt_call53);
    sjt_functionParam185 = &sjt_call53;
    sjf_string_add(sjt_parent99, sjt_functionParam185, &sjt_call50);
    sjt_parent98 = &sjt_call50;
    sjt_parent101 = _2;
    sjf_json_value_render(sjt_parent101, &sjt_call54);
    sjt_functionParam186 = &sjt_call54;
    sjf_string_add_heap(sjt_parent98, sjt_functionParam186, _return);

    if (sjt_call50._refCount == 1) { sjf_string_destroy(&sjt_call50); }
;
    if (sjt_call51._refCount == 1) { sjf_string_destroy(&sjt_call51); }
;
    if (sjt_call52._refCount == 1) { sjf_string_destroy(&sjt_call52); }
;
    if (sjt_call53._refCount == 1) { sjf_string_destroy(&sjt_call53); }
;
    if (sjt_call54._refCount == 1) { sjf_string_destroy(&sjt_call54); }
;
}

void sjf_lambda3(sjs_lambda3* _this) {
}

void sjf_lambda3_copy(sjs_lambda3* _this, sjs_lambda3* _from) {
}

void sjf_lambda3_destroy(sjs_lambda3* _this) {
}

void sjf_lambda3_heap(sjs_lambda3* _this) {
}

void sjf_lambda3_invoke(sjs_lambda3* _parent, sjs_json_value* _1, sjs_string* _return) {
    sjs_json_value* sjt_parent80 = 0;

    sjt_parent80 = _1;
    sjf_json_value_render(sjt_parent80, _return);
}

void sjf_lambda3_invoke_heap(sjs_lambda3* _parent, sjs_json_value* _1, sjs_string** _return) {
    sjs_json_value* sjt_parent81 = 0;

    sjt_parent81 = _1;
    sjf_json_value_render_heap(sjt_parent81, _return);
}

void sjf_list_string(sjs_list_string* _this) {
}

void sjf_list_string_add(sjs_list_string* _parent, sjs_string* item) {
    int32_t sjt_capture45;
    int32_t sjt_capture46;
    sjs_array_string sjt_funcold21 = { -1 };
    int32_t sjt_functionParam174;
    sjs_string* sjt_functionParam175 = 0;
    sjs_array_string* sjt_parent85 = 0;
    sjs_array_string* sjt_parent86 = 0;
    sjs_array_string* sjt_parent90 = 0;
    sjs_array_string* sjt_parent91 = 0;

    sjt_parent85 = &_parent->arr;
    sjf_array_string_getcount(sjt_parent85, &sjt_capture45);
    sjt_parent86 = &_parent->arr;
    sjf_array_string_gettotalcount(sjt_parent86, &sjt_capture46);
    if (sjt_capture45 == sjt_capture46) {
        int32_t sjt_capture47;
        int32_t sjt_functionParam169;
        int32_t sjt_functionParam170;
        int32_t sjt_functionParam171;
        int32_t sjt_functionParam172;
        int32_t sjt_functionParam173;
        sjs_array_string* sjt_parent87 = 0;
        sjs_array_string* sjt_parent88 = 0;
        sjs_array_string* sjt_parent89 = 0;

        sjt_funcold21._refCount = 1;
        sjf_array_string_copy(&sjt_funcold21, &_parent->arr);
        sjt_parent87 = &_parent->arr;
        sjt_functionParam169 = 0;
        sjt_parent88 = &_parent->arr;
        sjf_array_string_getcount(sjt_parent88, &sjt_functionParam170);
        sjt_functionParam172 = 10;
        sjt_parent89 = &_parent->arr;
        sjf_array_string_gettotalcount(sjt_parent89, &sjt_capture47);
        sjt_functionParam173 = sjt_capture47 * 2;
        sjf_i32_max(sjt_functionParam172, sjt_functionParam173, &sjt_functionParam171);
        sjf_array_string_clone(sjt_parent87, sjt_functionParam169, sjt_functionParam170, sjt_functionParam171, &sjt_funcold21);
        if (_parent->arr._refCount == 1) { sjf_array_string_destroy(&_parent->arr); }
;
        sjf_array_string_copy(&_parent->arr, &sjt_funcold21);
    }

    sjt_parent90 = &_parent->arr;
    sjt_parent91 = &_parent->arr;
    sjf_array_string_getcount(sjt_parent91, &sjt_functionParam174);
    sjt_functionParam175 = item;
    sjf_array_string_initat(sjt_parent90, sjt_functionParam174, sjt_functionParam175);

    if (sjt_funcold21._refCount == 1) { sjf_array_string_destroy(&sjt_funcold21); }
;
}

void sjf_list_string_copy(sjs_list_string* _this, sjs_list_string* _from) {
    _this->arr._refCount = 1;
    sjf_array_string_copy(&_this->arr, &_from->arr);
}

void sjf_list_string_destroy(sjs_list_string* _this) {
    if (_this->arr._refCount == 1) { sjf_array_string_destroy(&_this->arr); }
;
}

void sjf_list_string_heap(sjs_list_string* _this) {
}

void sjf_list_value(sjs_list_value* _this) {
}

void sjf_list_value_add(sjs_list_value* _parent, sjs_json_value* item) {
    int32_t sjt_capture23;
    int32_t sjt_capture24;
    sjs_array_value sjt_funcold8 = { -1 };
    int32_t sjt_functionParam73;
    sjs_json_value* sjt_functionParam74 = 0;
    sjs_array_value* sjt_parent39 = 0;
    sjs_array_value* sjt_parent40 = 0;
    sjs_array_value* sjt_parent44 = 0;
    sjs_array_value* sjt_parent45 = 0;

    sjt_parent39 = &_parent->arr;
    sjf_array_value_getcount(sjt_parent39, &sjt_capture23);
    sjt_parent40 = &_parent->arr;
    sjf_array_value_gettotalcount(sjt_parent40, &sjt_capture24);
    if (sjt_capture23 == sjt_capture24) {
        int32_t sjt_capture25;
        int32_t sjt_functionParam68;
        int32_t sjt_functionParam69;
        int32_t sjt_functionParam70;
        int32_t sjt_functionParam71;
        int32_t sjt_functionParam72;
        sjs_array_value* sjt_parent41 = 0;
        sjs_array_value* sjt_parent42 = 0;
        sjs_array_value* sjt_parent43 = 0;

        sjt_funcold8._refCount = 1;
        sjf_array_value_copy(&sjt_funcold8, &_parent->arr);
        sjt_parent41 = &_parent->arr;
        sjt_functionParam68 = 0;
        sjt_parent42 = &_parent->arr;
        sjf_array_value_getcount(sjt_parent42, &sjt_functionParam69);
        sjt_functionParam71 = 10;
        sjt_parent43 = &_parent->arr;
        sjf_array_value_gettotalcount(sjt_parent43, &sjt_capture25);
        sjt_functionParam72 = sjt_capture25 * 2;
        sjf_i32_max(sjt_functionParam71, sjt_functionParam72, &sjt_functionParam70);
        sjf_array_value_clone(sjt_parent41, sjt_functionParam68, sjt_functionParam69, sjt_functionParam70, &sjt_funcold8);
        if (_parent->arr._refCount == 1) { sjf_array_value_destroy(&_parent->arr); }
;
        sjf_array_value_copy(&_parent->arr, &sjt_funcold8);
    }

    sjt_parent44 = &_parent->arr;
    sjt_parent45 = &_parent->arr;
    sjf_array_value_getcount(sjt_parent45, &sjt_functionParam73);
    sjt_functionParam74 = item;
    sjf_array_value_initat(sjt_parent44, sjt_functionParam73, sjt_functionParam74);

    if (sjt_funcold8._refCount == 1) { sjf_array_value_destroy(&sjt_funcold8); }
;
}

void sjf_list_value_copy(sjs_list_value* _this, sjs_list_value* _from) {
    _this->arr._refCount = 1;
    sjf_array_value_copy(&_this->arr, &_from->arr);
}

void sjf_list_value_destroy(sjs_list_value* _this) {
    if (_this->arr._refCount == 1) { sjf_array_value_destroy(&_this->arr); }
;
}

void sjf_list_value_heap(sjs_list_value* _this) {
}

void sjf_log(sjs_log* _this) {
}

void sjf_log_copy(sjs_log* _this, sjs_log* _from) {
    _this->minlevel = _from->minlevel;
    sjs_hash_type_bool* copyoption2 = (_from->traceincludes._refCount != -1 ? &_from->traceincludes : 0);
    if (copyoption2 != 0) {
        _this->traceincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->traceincludes, copyoption2);
    } else {
        _this->traceincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption3 = (_from->debugincludes._refCount != -1 ? &_from->debugincludes : 0);
    if (copyoption3 != 0) {
        _this->debugincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->debugincludes, copyoption3);
    } else {
        _this->debugincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption4 = (_from->infoincludes._refCount != -1 ? &_from->infoincludes : 0);
    if (copyoption4 != 0) {
        _this->infoincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->infoincludes, copyoption4);
    } else {
        _this->infoincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption5 = (_from->warnincludes._refCount != -1 ? &_from->warnincludes : 0);
    if (copyoption5 != 0) {
        _this->warnincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->warnincludes, copyoption5);
    } else {
        _this->warnincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption6 = (_from->errorincludes._refCount != -1 ? &_from->errorincludes : 0);
    if (copyoption6 != 0) {
        _this->errorincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->errorincludes, copyoption6);
    } else {
        _this->errorincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption7 = (_from->fatalincludes._refCount != -1 ? &_from->fatalincludes : 0);
    if (copyoption7 != 0) {
        _this->fatalincludes._refCount = 1;
        sjf_hash_type_bool_copy(&_this->fatalincludes, copyoption7);
    } else {
        _this->fatalincludes._refCount = -1;
    }
}

void sjf_log_destroy(sjs_log* _this) {
    if (_this->traceincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->traceincludes); }
;
    if (_this->debugincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->debugincludes); }
;
    if (_this->infoincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->infoincludes); }
;
    if (_this->warnincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->warnincludes); }
;
    if (_this->errorincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->errorincludes); }
;
    if (_this->fatalincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->fatalincludes); }
;
}

void sjf_log_heap(sjs_log* _this) {
}

void sjf_string(sjs_string* _this) {
}

void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return) {
    sjs_array_char newdata = { -1 };

    if (item->count == 0) {
        _return->_refCount = 1;
        sjf_string_copy(_return, _parent);
    } else {
        bool sjt_capture14;
        int32_t sjt_capture15;
        sjs_array_char* sjt_parent19 = 0;

        sjt_parent19 = &_parent->data;
        sjf_array_char_gettotalcount(sjt_parent19, &sjt_capture15);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture15) {
            int32_t sjt_capture16;
            sjs_array_char* sjt_parent20 = 0;

            sjt_parent20 = &_parent->data;
            sjf_array_char_getcount(sjt_parent20, &sjt_capture16);
            sjt_capture14 = ((_parent->offset + _parent->count) == sjt_capture16);
        } else {
            sjt_capture14 = false;
        }

        if (sjt_capture14) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd1;
            int32_t sjt_forStart1;

            newcount = _parent->count;
            sjt_forStart1 = 0;
            sjt_forEnd1 = item->count;
            i = sjt_forStart1;
            while (i < sjt_forEnd1) {
                int32_t sjt_functionParam43;
                char sjt_functionParam44;
                int32_t sjt_functionParam45;
                sjs_array_char* sjt_parent21 = 0;
                sjs_string* sjt_parent22 = 0;

                sjt_parent21 = &_parent->data;
                sjt_functionParam43 = newcount;
                sjt_parent22 = item;
                sjt_functionParam45 = i;
                sjf_string_getat(sjt_parent22, sjt_functionParam45, &sjt_functionParam44);
                sjf_array_char_initat(sjt_parent21, sjt_functionParam43, sjt_functionParam44);
                newcount = newcount + 1;
                i++;
            }

            _return->_refCount = 1;
            _return->offset = _parent->offset;
            _return->count = newcount;
            _return->data._refCount = 1;
            sjf_array_char_copy(&_return->data, &_parent->data);
            _return->_isnullterminated = false;
            sjf_string(_return);
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd2;
            int32_t sjt_forStart2;
            int32_t sjt_functionParam46;
            int32_t sjt_functionParam47;
            int32_t sjt_functionParam48;
            sjs_array_char* sjt_parent23 = 0;
            sjs_array_char* sjt_parent24 = 0;

            sjt_parent23 = &_parent->data;
            sjt_functionParam46 = _parent->offset;
            sjt_functionParam47 = _parent->count;
            sjt_functionParam48 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
            sjf_array_char_clone(sjt_parent23, sjt_functionParam46, sjt_functionParam47, sjt_functionParam48, &newdata);
            sjt_parent24 = &newdata;
            sjf_array_char_getcount(sjt_parent24, &newcount);
            sjt_forStart2 = 0;
            sjt_forEnd2 = item->count;
            i = sjt_forStart2;
            while (i < sjt_forEnd2) {
                int32_t sjt_functionParam49;
                char sjt_functionParam50;
                int32_t sjt_functionParam51;
                sjs_array_char* sjt_parent25 = 0;
                sjs_string* sjt_parent26 = 0;

                sjt_parent25 = &newdata;
                sjt_functionParam49 = newcount;
                sjt_parent26 = item;
                sjt_functionParam51 = i;
                sjf_string_getat(sjt_parent26, sjt_functionParam51, &sjt_functionParam50);
                sjf_array_char_initat(sjt_parent25, sjt_functionParam49, sjt_functionParam50);
                newcount = newcount + 1;
                i++;
            }

            _return->_refCount = 1;
            _return->offset = 0;
            _return->count = newcount;
            _return->data._refCount = 1;
            sjf_array_char_copy(&_return->data, &newdata);
            _return->_isnullterminated = false;
            sjf_string(_return);
        }
    }

    if (newdata._refCount == 1) { sjf_array_char_destroy(&newdata); }
;
}

void sjf_string_add_heap(sjs_string* _parent, sjs_string* item, sjs_string** _return) {
    sjs_array_char newdata = { -1 };

    if (item->count == 0) {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
        sjf_string_copy((*_return), _parent);
    } else {
        bool sjt_capture17;
        int32_t sjt_capture18;
        sjs_array_char* sjt_parent27 = 0;

        sjt_parent27 = &_parent->data;
        sjf_array_char_gettotalcount(sjt_parent27, &sjt_capture18);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture18) {
            int32_t sjt_capture19;
            sjs_array_char* sjt_parent28 = 0;

            sjt_parent28 = &_parent->data;
            sjf_array_char_getcount(sjt_parent28, &sjt_capture19);
            sjt_capture17 = ((_parent->offset + _parent->count) == sjt_capture19);
        } else {
            sjt_capture17 = false;
        }

        if (sjt_capture17) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd3;
            int32_t sjt_forStart3;

            newcount = _parent->count;
            sjt_forStart3 = 0;
            sjt_forEnd3 = item->count;
            i = sjt_forStart3;
            while (i < sjt_forEnd3) {
                int32_t sjt_functionParam52;
                char sjt_functionParam53;
                int32_t sjt_functionParam54;
                sjs_array_char* sjt_parent29 = 0;
                sjs_string* sjt_parent30 = 0;

                sjt_parent29 = &_parent->data;
                sjt_functionParam52 = newcount;
                sjt_parent30 = item;
                sjt_functionParam54 = i;
                sjf_string_getat(sjt_parent30, sjt_functionParam54, &sjt_functionParam53);
                sjf_array_char_initat(sjt_parent29, sjt_functionParam52, sjt_functionParam53);
                newcount = newcount + 1;
                i++;
            }

            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
            (*_return)->_refCount = 1;
            (*_return)->offset = _parent->offset;
            (*_return)->count = newcount;
            (*_return)->data._refCount = 1;
            sjf_array_char_copy(&(*_return)->data, &_parent->data);
            (*_return)->_isnullterminated = false;
            sjf_string_heap((*_return));
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd4;
            int32_t sjt_forStart4;
            int32_t sjt_functionParam55;
            int32_t sjt_functionParam56;
            int32_t sjt_functionParam57;
            sjs_array_char* sjt_parent31 = 0;
            sjs_array_char* sjt_parent32 = 0;

            sjt_parent31 = &_parent->data;
            sjt_functionParam55 = _parent->offset;
            sjt_functionParam56 = _parent->count;
            sjt_functionParam57 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
            sjf_array_char_clone(sjt_parent31, sjt_functionParam55, sjt_functionParam56, sjt_functionParam57, &newdata);
            sjt_parent32 = &newdata;
            sjf_array_char_getcount(sjt_parent32, &newcount);
            sjt_forStart4 = 0;
            sjt_forEnd4 = item->count;
            i = sjt_forStart4;
            while (i < sjt_forEnd4) {
                int32_t sjt_functionParam58;
                char sjt_functionParam59;
                int32_t sjt_functionParam60;
                sjs_array_char* sjt_parent33 = 0;
                sjs_string* sjt_parent34 = 0;

                sjt_parent33 = &newdata;
                sjt_functionParam58 = newcount;
                sjt_parent34 = item;
                sjt_functionParam60 = i;
                sjf_string_getat(sjt_parent34, sjt_functionParam60, &sjt_functionParam59);
                sjf_array_char_initat(sjt_parent33, sjt_functionParam58, sjt_functionParam59);
                newcount = newcount + 1;
                i++;
            }

            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
            (*_return)->_refCount = 1;
            (*_return)->offset = 0;
            (*_return)->count = newcount;
            (*_return)->data._refCount = 1;
            sjf_array_char_copy(&(*_return)->data, &newdata);
            (*_return)->_isnullterminated = false;
            sjf_string_heap((*_return));
        }
    }

    if (newdata._refCount == 1) { sjf_array_char_destroy(&newdata); }
;
}

void sjf_string_asstring(sjs_string* _parent, sjs_string* _return) {
    _return->_refCount = 1;
    sjf_string_copy(_return, _parent);
}

void sjf_string_asstring_heap(sjs_string* _parent, sjs_string** _return) {
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
    (*_return)->_refCount = 1;
    sjf_string_copy((*_return), _parent);
}

void sjf_string_copy(sjs_string* _this, sjs_string* _from) {
    _this->offset = _from->offset;
    _this->count = _from->count;
    _this->data._refCount = 1;
    sjf_array_char_copy(&_this->data, &_from->data);
    _this->_isnullterminated = _from->_isnullterminated;
}

void sjf_string_destroy(sjs_string* _this) {
    if (_this->data._refCount == 1) { sjf_array_char_destroy(&_this->data); }
;
}

void sjf_string_getat(sjs_string* _parent, int32_t index, char* _return) {
    int32_t sjt_functionParam4;
    sjs_array_char* sjt_parent3 = 0;

    sjt_parent3 = &_parent->data;
    sjt_functionParam4 = _parent->offset + index;
    sjf_array_char_getat(sjt_parent3, sjt_functionParam4, _return);
}

void sjf_string_hash(sjs_string* _parent, uint32_t* _return) {
    (*_return) = kh_str_hash_func(((sjs_array*)_parent->data.v)->data + _parent->offset, _parent->count);
return;;
}

void sjf_string_heap(sjs_string* _this) {
}

void sjf_string_isequal(sjs_string* _parent, sjs_string* test, bool* _return) {
    sjs_array* arr1 = (sjs_array*)_parent->data.v;
    sjs_array* arr2 = (sjs_array*)test->data.v;
    if (_parent->count != test->count) {
        (*_return) = false;
return;;      
    }
    bool result = memcmp(arr1->data + _parent->offset, arr2->data + test->offset, _parent->count) == 0;
    (*_return) = result;
return;;      
}

void sjf_string_nullterminate(sjs_string* _parent) {
    bool result2;
    sjs_array_char sjt_funcold1 = { -1 };

    result2 = !_parent->_isnullterminated;
    if (result2) {
        int32_t sjt_capture1;
        sjs_array_char* sjt_parent1 = 0;

        sjt_parent1 = &_parent->data;
        sjf_array_char_gettotalcount(sjt_parent1, &sjt_capture1);
        if (((_parent->offset + _parent->count) + 1) > sjt_capture1) {
            int32_t sjt_functionParam1;
            int32_t sjt_functionParam2;
            int32_t sjt_functionParam3;
            sjs_array_char* sjt_parent2 = 0;

            sjt_funcold1._refCount = 1;
            sjf_array_char_copy(&sjt_funcold1, &_parent->data);
            sjt_parent2 = &_parent->data;
            sjt_functionParam1 = _parent->offset;
            sjt_functionParam2 = _parent->count;
            sjt_functionParam3 = _parent->count + 1;
            sjf_array_char_clone(sjt_parent2, sjt_functionParam1, sjt_functionParam2, sjt_functionParam3, &sjt_funcold1);
            if (_parent->data._refCount == 1) { sjf_array_char_destroy(&_parent->data); }
;
            sjf_array_char_copy(&_parent->data, &sjt_funcold1);
            _parent->offset = 0;
        }

        ((sjs_array*)_parent->data.v)->data[_parent->offset + _parent->count] = 0;
        _parent->_isnullterminated = true;
    }

    if (sjt_funcold1._refCount == 1) { sjf_array_char_destroy(&sjt_funcold1); }
;
}

void sjf_string_substr(sjs_string* _parent, int32_t o, int32_t c, sjs_string* _return) {
    sjs_string sjt_call1 = { -1 };
    int32_t sjt_capture8;
    sjs_array_char* sjt_parent10 = 0;

    sjt_parent10 = &_parent->data;
    sjf_array_char_getcount(sjt_parent10, &sjt_capture8);
    if (((_parent->offset + o) + c) > sjt_capture8) {
        sjs_string* sjt_functionParam17 = 0;

        sjt_call1._refCount = 1;
        sjt_call1.offset = 0;
        sjt_call1.count = 13;
        sjt_call1.data._refCount = 1;
        sjt_call1.data.v = &sjg_string2;
        sjf_array_char(&sjt_call1.data);
        sjt_call1._isnullterminated = false;
        sjf_string(&sjt_call1);
        sjt_functionParam17 = &sjt_call1;
        sjf_halt(sjt_functionParam17);
    }

    _return->_refCount = 1;
    _return->offset = _parent->offset + o;
    _return->count = c;
    _return->data._refCount = 1;
    sjf_array_char_copy(&_return->data, &_parent->data);
    _return->_isnullterminated = false;
    sjf_string(_return);

    if (sjt_call1._refCount == 1) { sjf_string_destroy(&sjt_call1); }
;
}

void sjf_string_substr_heap(sjs_string* _parent, int32_t o, int32_t c, sjs_string** _return) {
    sjs_string sjt_call2 = { -1 };
    int32_t sjt_capture9;
    sjs_array_char* sjt_parent11 = 0;

    sjt_parent11 = &_parent->data;
    sjf_array_char_getcount(sjt_parent11, &sjt_capture9);
    if (((_parent->offset + o) + c) > sjt_capture9) {
        sjs_string* sjt_functionParam18 = 0;

        sjt_call2._refCount = 1;
        sjt_call2.offset = 0;
        sjt_call2.count = 13;
        sjt_call2.data._refCount = 1;
        sjt_call2.data.v = &sjg_string2;
        sjf_array_char(&sjt_call2.data);
        sjt_call2._isnullterminated = false;
        sjf_string(&sjt_call2);
        sjt_functionParam18 = &sjt_call2;
        sjf_halt(sjt_functionParam18);
    }

    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
    (*_return)->_refCount = 1;
    (*_return)->offset = _parent->offset + o;
    (*_return)->count = c;
    (*_return)->data._refCount = 1;
    sjf_array_char_copy(&(*_return)->data, &_parent->data);
    (*_return)->_isnullterminated = false;
    sjf_string_heap((*_return));

    if (sjt_call2._refCount == 1) { sjf_string_destroy(&sjt_call2); }
;
}

void sjf_test(sjs_string* s) {
    sjs_json_value data = { -1 };
    sjs_string* sjt_functionParam151 = 0;

    sjt_functionParam151 = s;
    sjf_json_parse(sjt_functionParam151, &data);
    if (((data._refCount != -1 ? &data : 0) != 0)) {
        sjs_json_value* ifValue1 = 0;
        sjs_string sjt_call23 = { -1 };
        sjs_string* sjt_functionParam152 = 0;
        sjs_json_value* sjt_parent110 = 0;

        ifValue1 = (data._refCount != -1 ? &data : 0);
        sjt_parent110 = ifValue1;
        sjf_json_value_render(sjt_parent110, &sjt_call23);
        sjt_functionParam152 = &sjt_call23;
        sjf_debug_writeline(sjt_functionParam152);

        if (sjt_call23._refCount == 1) { sjf_string_destroy(&sjt_call23); }
;
    } else {
        sjs_string sjt_call71 = { -1 };
        sjs_string* sjt_functionParam197 = 0;

        sjt_call71._refCount = 1;
        sjt_call71.offset = 0;
        sjt_call71.count = 11;
        sjt_call71.data._refCount = 1;
        sjt_call71.data.v = &sjg_string5;
        sjf_array_char(&sjt_call71.data);
        sjt_call71._isnullterminated = false;
        sjf_string(&sjt_call71);
        sjt_functionParam197 = &sjt_call71;
        sjf_debug_writeline(sjt_functionParam197);

        if (sjt_call71._refCount == 1) { sjf_string_destroy(&sjt_call71); }
;
    }

    if (data._refCount == 1) { sjf_json_value_destroy(&data); }
;
}

void sjf_tuple2_i32_string(sjs_tuple2_i32_string* _this) {
}

void sjf_tuple2_i32_string_copy(sjs_tuple2_i32_string* _this, sjs_tuple2_i32_string* _from) {
    _this->item1 = _from->item1;
    _this->item2._refCount = 1;
    sjf_string_copy(&_this->item2, &_from->item2);
}

void sjf_tuple2_i32_string_destroy(sjs_tuple2_i32_string* _this) {
    if (_this->item2._refCount == 1) { sjf_string_destroy(&_this->item2); }
;
}

void sjf_tuple2_i32_string_heap(sjs_tuple2_i32_string* _this) {
}

void sjf_tuple2_i32_value(sjs_tuple2_i32_value* _this) {
}

void sjf_tuple2_i32_value_copy(sjs_tuple2_i32_value* _this, sjs_tuple2_i32_value* _from) {
    _this->item1 = _from->item1;
    _this->item2._refCount = 1;
    sjf_json_value_copy(&_this->item2, &_from->item2);
}

void sjf_tuple2_i32_value_destroy(sjs_tuple2_i32_value* _this) {
    if (_this->item2._refCount == 1) { sjf_json_value_destroy(&_this->item2); }
;
}

void sjf_tuple2_i32_value_heap(sjs_tuple2_i32_value* _this) {
}

void sjf_type_hash(int32_t val, uint32_t* _return) {
    int32_t sjt_cast1;

    sjt_cast1 = val;
    (*_return) = (uint32_t)sjt_cast1;
}

void sjf_type_isequal(int32_t l, int32_t r, bool* _return) {
    (*_return) = l == r;
}

int main(int argc, char** argv) {
    g_loglevel_trace = 0;
    g_loglevel_debug = 1;
    g_loglevel_info = 2;
    g_loglevel_warn = 3;
    g_loglevel_error = 4;
    g_loglevel_fatal = 5;
    g_f32_pi = 3.14159265358979323846f;
    g_u32_maxvalue = (uint32_t)4294967295u;
    result1 = -1;
    g_i32_maxvalue = result1 - 2147483647;
    g_i32_minvalue = 2147483647;
    g_log_includeall._refCount = -1;
    sjt_value1._refCount = 1;
    sjf_hash_type_bool(&sjt_value1);
    sjs_hash_type_bool* copyoption1 = &sjt_value1;
    if (copyoption1 != 0) {
        g_log_excludeall._refCount = 1;
        sjf_hash_type_bool_copy(&g_log_excludeall, copyoption1);
    } else {
        g_log_excludeall._refCount = -1;
    }

    g_log._refCount = 1;
    g_log.minlevel = g_loglevel_warn;
    sjs_hash_type_bool* copyoption8 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption8 != 0) {
        g_log.traceincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.traceincludes, copyoption8);
    } else {
        g_log.traceincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption9 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption9 != 0) {
        g_log.debugincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.debugincludes, copyoption9);
    } else {
        g_log.debugincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption10 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption10 != 0) {
        g_log.infoincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.infoincludes, copyoption10);
    } else {
        g_log.infoincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption11 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption11 != 0) {
        g_log.warnincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.warnincludes, copyoption11);
    } else {
        g_log.warnincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption12 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption12 != 0) {
        g_log.errorincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.errorincludes, copyoption12);
    } else {
        g_log.errorincludes._refCount = -1;
    }

    sjs_hash_type_bool* copyoption13 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption13 != 0) {
        g_log.fatalincludes._refCount = 1;
        sjf_hash_type_bool_copy(&g_log.fatalincludes, copyoption13);
    } else {
        g_log.fatalincludes._refCount = -1;
    }

    sjf_log(&g_log);
    ptr_init();
    weakptr_init();
    g_clocks_per_sec = 0;
    g_clocks_per_sec = CLOCKS_PER_SEC;
    sjt_call72._refCount = 1;
    sjt_call72.offset = 0;
    sjt_call72.count = 5;
    sjt_call72.data._refCount = 1;
    sjt_call72.data.v = &sjg_string13;
    sjf_array_char(&sjt_call72.data);
    sjt_call72._isnullterminated = false;
    sjf_string(&sjt_call72);
    sjt_functionParam198 = &sjt_call72;
    sjf_test(sjt_functionParam198);
    sjt_call73._refCount = 1;
    sjt_call73.offset = 0;
    sjt_call73.count = 2;
    sjt_call73.data._refCount = 1;
    sjt_call73.data.v = &sjg_string14;
    sjf_array_char(&sjt_call73.data);
    sjt_call73._isnullterminated = false;
    sjf_string(&sjt_call73);
    sjt_functionParam199 = &sjt_call73;
    sjf_test(sjt_functionParam199);
    sjt_call74._refCount = 1;
    sjt_call74.offset = 0;
    sjt_call74.count = 12;
    sjt_call74.data._refCount = 1;
    sjt_call74.data.v = &sjg_string15;
    sjf_array_char(&sjt_call74.data);
    sjt_call74._isnullterminated = false;
    sjf_string(&sjt_call74);
    sjt_functionParam200 = &sjt_call74;
    sjf_test(sjt_functionParam200);
    sjt_call75._refCount = 1;
    sjt_call75.offset = 0;
    sjt_call75.count = 3;
    sjt_call75.data._refCount = 1;
    sjt_call75.data.v = &sjg_string16;
    sjf_array_char(&sjt_call75.data);
    sjt_call75._isnullterminated = false;
    sjf_string(&sjt_call75);
    sjt_functionParam201 = &sjt_call75;
    sjf_test(sjt_functionParam201);
    sjt_call76._refCount = 1;
    sjt_call76.offset = 0;
    sjt_call76.count = 19;
    sjt_call76.data._refCount = 1;
    sjt_call76.data.v = &sjg_string17;
    sjf_array_char(&sjt_call76.data);
    sjt_call76._isnullterminated = false;
    sjf_string(&sjt_call76);
    sjt_functionParam202 = &sjt_call76;
    sjf_test(sjt_functionParam202);
    sjt_call77._refCount = 1;
    sjt_call77.offset = 0;
    sjt_call77.count = 32;
    sjt_call77.data._refCount = 1;
    sjt_call77.data.v = &sjg_string18;
    sjf_array_char(&sjt_call77.data);
    sjt_call77._isnullterminated = false;
    sjf_string(&sjt_call77);
    sjt_functionParam203 = &sjt_call77;
    sjf_test(sjt_functionParam203);
    sjt_call78._refCount = 1;
    sjt_call78.offset = 0;
    sjt_call78.count = 300;
    sjt_call78.data._refCount = 1;
    sjt_call78.data.v = &sjg_string19;
    sjf_array_char(&sjt_call78.data);
    sjt_call78._isnullterminated = false;
    sjf_string(&sjt_call78);
    sjt_functionParam204 = &sjt_call78;
    sjf_test(sjt_functionParam204);
    sjt_call79._refCount = 1;
    sjt_call79.offset = 0;
    sjt_call79.count = 369;
    sjt_call79.data._refCount = 1;
    sjt_call79.data.v = &sjg_string20;
    sjf_array_char(&sjt_call79.data);
    sjt_call79._isnullterminated = false;
    sjf_string(&sjt_call79);
    sjt_functionParam205 = &sjt_call79;
    sjf_test(sjt_functionParam205);
    main_destroy();
    return 0;
}

void main_destroy() {

    if (g_log._refCount == 1) { sjf_log_destroy(&g_log); }
;
    if (g_log_excludeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_excludeall); }
;
    if (g_log_includeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_includeall); }
;
    if (sjt_call72._refCount == 1) { sjf_string_destroy(&sjt_call72); }
;
    if (sjt_call73._refCount == 1) { sjf_string_destroy(&sjt_call73); }
;
    if (sjt_call74._refCount == 1) { sjf_string_destroy(&sjt_call74); }
;
    if (sjt_call75._refCount == 1) { sjf_string_destroy(&sjt_call75); }
;
    if (sjt_call76._refCount == 1) { sjf_string_destroy(&sjt_call76); }
;
    if (sjt_call77._refCount == 1) { sjf_string_destroy(&sjt_call77); }
;
    if (sjt_call78._refCount == 1) { sjf_string_destroy(&sjt_call78); }
;
    if (sjt_call79._refCount == 1) { sjf_string_destroy(&sjt_call79); }
;
    if (sjt_value1._refCount == 1) { sjf_hash_type_bool_destroy(&sjt_value1); }
;
}
