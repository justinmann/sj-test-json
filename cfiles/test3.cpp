#include <lib/sj-lib-common/common.h>

struct {
    int refcount;
    int size;
    int count;
    char data[593];
} sjg_string1 = { 1, 593, 592, "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string10 = { 1, 3, 2, "{ "};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string11 = { 1, 5, 4, "\" : "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string12 = { 1, 3, 2, ", "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string13 = { 1, 3, 2, " }"};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string14 = { 1, 3, 2, "[ "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string15 = { 1, 3, 2, " ]"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string16 = { 1, 2, 1, "{"};
struct {
    int refcount;
    int size;
    int count;
    char data[14];
} sjg_string17 = { 1, 14, 13, "out of bounds"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string18 = { 1, 2, 1, "\n"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string19 = { 1, 2, 1, "}"};
struct {
    int refcount;
    int size;
    int count;
    char data[6];
} sjg_string2 = { 1, 6, 5, "false"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string20 = { 1, 2, 1, "["};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string21 = { 1, 2, 1, "]"};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string3 = { 1, 5, 4, "true"};
struct {
    int refcount;
    int size;
    int count;
    char data[6];
} sjg_string4 = { 1, 6, 5, "hello"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string5 = { 1, 2, 1, "\""};
struct {
    int refcount;
    int size;
    int count;
    char data[4];
} sjg_string6 = { 1, 4, 3, "foo"};
struct {
    int refcount;
    int size;
    int count;
    char data[4];
} sjg_string7 = { 1, 4, 3, "bar"};
struct {
    int refcount;
    int size;
    int count;
    char data[6];
} sjg_string8 = { 1, 6, 5, "alpha"};
struct {
    int refcount;
    int size;
    int count;
    char data[1];
} sjg_string9 = { 1, 1, 0, ""};

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
#define sjs_array_value_typeId 29
#define sjs_hash_string_value_typeId 30
#define sjs_json_value_typeId 27
#define sjs_array_string_typeId 55
#define cb_value_string_typeId 73
#define cb_value_string_heap_typeId 73
#define sjs_lambda3_typeId 76
#define cb_value_string_heap_string_typeId 78
#define cb_value_string_heap_string_heap_typeId 78
#define sjs_list_string_typeId 54
#define cb_string_value_void_typeId 57
#define cb_string_value_void_heap_typeId 57
#define cb_string_value_string_typeId 53
#define cb_string_value_string_heap_typeId 53
#define sjs_lambda1_typeId 58
#define sjs_lambda2_typeId 66
#define cb_string_value_string_heap_string_typeId 68
#define cb_string_value_string_heap_string_heap_typeId 68
#define sjs_lambda5_typeId 85
#define sjs_lambda4_typeId 83

typedef struct td_sjs_hash_type_bool sjs_hash_type_bool;
typedef struct td_sjs_log sjs_log;
typedef struct td_sjs_array_char sjs_array_char;
typedef struct td_sjs_string sjs_string;
typedef struct td_sjs_array_value sjs_array_value;
typedef struct td_sjs_hash_string_value sjs_hash_string_value;
typedef struct td_sjs_json_value sjs_json_value;
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
typedef struct td_sjs_lambda5 sjs_lambda5;
typedef struct td_sjs_lambda4 sjs_lambda4;

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

struct td_sjs_lambda5 {
    int _refCount;
    int32_t* lambdaparam8;
    int32_t* lambdaparam9;
    int32_t* lambdaparam10;
    int32_t* lambdaparam11;
};

struct td_sjs_lambda4 {
    int _refCount;
    int32_t* lambdaparam4;
    int32_t* lambdaparam5;
    int32_t* lambdaparam6;
    int32_t* lambdaparam7;
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

sjs_string g_allthespaces = { -1 };
int32_t g_clocks_per_sec;
float g_f32_pi;
int32_t g_i32_maxvalue;
int32_t g_i32_minvalue;
sjs_log g_log = { -1 };
sjs_hash_type_bool g_log_excludeall = { -1 };
sjs_hash_type_bool g_log_includeall = { -1 };
uint32_t g_u32_maxvalue;
sjs_json_value g_v1 = { -1 };
sjs_json_value g_v2 = { -1 };
sjs_json_value g_v3 = { -1 };
sjs_json_value g_v4 = { -1 };
sjs_json_value g_v5 = { -1 };
sjs_json_value g_v6 = { -1 };
int32_t result1;
sjs_string sjt_call15 = { -1 };
sjs_array_value sjt_call16 = { -1 };
sjs_hash_string_value sjt_call17 = { -1 };
sjs_string sjt_call18 = { -1 };
sjs_string sjt_call19 = { -1 };
sjs_json_value sjt_call20 = { -1 };
sjs_string sjt_call21 = { -1 };
sjs_string sjt_call22 = { -1 };
sjs_string sjt_call70 = { -1 };
sjs_string* sjt_functionParam100 = 0;
bool sjt_functionParam11;
float sjt_functionParam14;
int32_t sjt_functionParam161;
sjs_string* sjt_functionParam38 = 0;
sjs_array_value* sjt_functionParam39 = 0;
int32_t sjt_functionParam40;
sjs_json_value* sjt_functionParam41 = 0;
int32_t sjt_functionParam42;
sjs_json_value* sjt_functionParam43 = 0;
int32_t sjt_functionParam44;
sjs_json_value* sjt_functionParam45 = 0;
int32_t sjt_functionParam46;
sjs_json_value* sjt_functionParam47 = 0;
sjs_hash_string_value* sjt_functionParam48 = 0;
int32_t sjt_functionParam49;
sjs_string* sjt_functionParam50 = 0;
sjs_json_value* sjt_functionParam51 = 0;
sjs_string* sjt_functionParam52 = 0;
sjs_json_value* sjt_functionParam53 = 0;
sjs_string* sjt_functionParam54 = 0;
sjs_string* sjt_functionParam55 = 0;
int32_t sjt_functionParam8;
sjs_json_value* sjt_parent121 = 0;
sjs_array_value* sjt_parent25 = 0;
sjs_array_value* sjt_parent26 = 0;
sjs_array_value* sjt_parent27 = 0;
sjs_array_value* sjt_parent28 = 0;
sjs_hash_string_value* sjt_parent29 = 0;
sjs_hash_string_value* sjt_parent30 = 0;
sjs_hash_string_value* sjt_parent31 = 0;
sjs_json_value* sjt_parent72 = 0;
sjs_hash_type_bool sjt_value1 = { -1 };

void sjf_array_bang_json_value_asjson_value(sjs_array_value* x, sjs_json_value* _return);
void sjf_array_bang_json_value_asjson_value_heap(sjs_array_value* x, sjs_json_value** _return);
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
void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from);
void sjf_array_value_destroy(sjs_array_value* _this);
void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return);
void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return);
void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return);
void sjf_array_value_heap(sjs_array_value* _this);
void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item);
void sjf_array_value_map_string(sjs_array_value* _parent, cb_value_string cb, sjs_array_string* _return);
void sjf_array_value_map_string_heap(sjs_array_value* _parent, cb_value_string cb, sjs_array_string** _return);
void sjf_bool_asjson_value(bool x, sjs_json_value* _return);
void sjf_bool_asjson_value_heap(bool x, sjs_json_value** _return);
void sjf_bool_asstring(bool val, sjs_string* _return);
void sjf_bool_asstring_heap(bool val, sjs_string** _return);
void sjf_debug_writeline(sjs_string* data);
void sjf_f32_asjson_value(float x, sjs_json_value* _return);
void sjf_f32_asjson_value_heap(float x, sjs_json_value** _return);
void sjf_f32_asstring(float val, sjs_string* _return);
void sjf_f32_asstring_heap(float val, sjs_string** _return);
void sjf_halt(sjs_string* reason);
void sjf_hash_bang_string_json_value_asjson_value(sjs_hash_string_value* x, sjs_json_value* _return);
void sjf_hash_bang_string_json_value_asjson_value_heap(sjs_hash_string_value* x, sjs_json_value** _return);
void sjf_hash_string_value(sjs_hash_string_value* _this);
void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key);
void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val);
void sjf_hash_string_value_asarray_string(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string* _return);
void sjf_hash_string_value_asarray_string_heap(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string** _return);
void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from);
void sjf_hash_string_value_destroy(sjs_hash_string_value* _this);
void sjf_hash_string_value_each(sjs_hash_string_value* _parent, cb_string_value_void cb);
void sjf_hash_string_value_heap(sjs_hash_string_value* _this);
void sjf_hash_string_value_resize(sjs_hash_string_value* _parent, int32_t newbuckets);
void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val);
void sjf_hash_type_bool(sjs_hash_type_bool* _this);
void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key);
void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val);
void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from);
void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this);
void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this);
void sjf_i32_asjson_value(int32_t x, sjs_json_value* _return);
void sjf_i32_asjson_value_heap(int32_t x, sjs_json_value** _return);
void sjf_i32_asstring(int32_t val, int32_t base, sjs_string* _return);
void sjf_i32_asstring_heap(int32_t val, int32_t base, sjs_string** _return);
void sjf_i32_max(int32_t a, int32_t b, int32_t* _return);
void sjf_json_value(sjs_json_value* _this);
void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from);
void sjf_json_value_destroy(sjs_json_value* _this);
void sjf_json_value_heap(sjs_json_value* _this);
void sjf_json_value_pretty(sjs_json_value* _parent, int32_t level, sjs_string* _return);
void sjf_json_value_pretty_heap(sjs_json_value* _parent, int32_t level, sjs_string** _return);
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
void sjf_lambda4(sjs_lambda4* _this);
void sjf_lambda4_copy(sjs_lambda4* _this, sjs_lambda4* _from);
void sjf_lambda4_destroy(sjs_lambda4* _this);
void sjf_lambda4_heap(sjs_lambda4* _this);
void sjf_lambda4_invoke(sjs_lambda4* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string* _return);
void sjf_lambda4_invoke_heap(sjs_lambda4* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string** _return);
void sjf_lambda5(sjs_lambda5* _this);
void sjf_lambda5_copy(sjs_lambda5* _this, sjs_lambda5* _from);
void sjf_lambda5_destroy(sjs_lambda5* _this);
void sjf_lambda5_heap(sjs_lambda5* _this);
void sjf_lambda5_invoke(sjs_lambda5* _parent, sjs_json_value* _1, sjs_string* _return);
void sjf_lambda5_invoke_heap(sjs_lambda5* _parent, sjs_json_value* _1, sjs_string** _return);
void sjf_list_string(sjs_list_string* _this);
void sjf_list_string_add(sjs_list_string* _parent, sjs_string* item);
void sjf_list_string_copy(sjs_list_string* _this, sjs_list_string* _from);
void sjf_list_string_destroy(sjs_list_string* _this);
void sjf_list_string_heap(sjs_list_string* _this);
void sjf_log(sjs_log* _this);
void sjf_log_copy(sjs_log* _this, sjs_log* _from);
void sjf_log_destroy(sjs_log* _this);
void sjf_log_heap(sjs_log* _this);
void sjf_spaces(int32_t count, sjs_string* _return);
void sjf_spaces_heap(int32_t count, sjs_string** _return);
void sjf_string(sjs_string* _this);
void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return);
void sjf_string_add_heap(sjs_string* _parent, sjs_string* item, sjs_string** _return);
void sjf_string_asjson_value(sjs_string* x, sjs_json_value* _return);
void sjf_string_asjson_value_heap(sjs_string* x, sjs_json_value** _return);
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
void sjf_array_bang_json_value_asjson_value(sjs_array_value* x, sjs_json_value* _return) {
    _return->_refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
    _return->s._refCount = -1;
#line 108
    sjs_array_value* copyoption25 = x;
    if (copyoption25 != 0) {
        _return->a._refCount = 1;
#line 108 "lib/sj-lib-json/value.sj"
        sjf_array_value_copy(&_return->a, copyoption25);
    } else {
        _return->a._refCount = -1;
    }

#line 5
    _return->h._refCount = -1;
#line 5
    sjf_json_value(_return);
}

void sjf_array_bang_json_value_asjson_value_heap(sjs_array_value* x, sjs_json_value** _return) {
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
    (*_return)->s._refCount = -1;
#line 108
    sjs_array_value* copyoption26 = x;
    if (copyoption26 != 0) {
        (*_return)->a._refCount = 1;
#line 108 "lib/sj-lib-json/value.sj"
        sjf_array_value_copy(&(*_return)->a, copyoption26);
    } else {
        (*_return)->a._refCount = -1;
    }

#line 5
    (*_return)->h._refCount = -1;
#line 5
    sjf_json_value_heap((*_return));
}

void sjf_array_char(sjs_array_char* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(char), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    char* p = (char*)arr->data + offset;
#line 187
    char* newp = (char*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if true
#line 193
    memcpy(newp, p, sizeof(char) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 197
    }
#line 198
    #endif
#line 198
    _return->_refCount = 1;
#line 200
    _return->v = newv;
#line 200
    sjf_array_char(_return);
}

void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(char), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    char* p = (char*)arr->data + offset;
#line 187
    char* newp = (char*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if true
#line 193
    memcpy(newp, p, sizeof(char) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 197
    }
#line 198
    #endif
#line 198
    (*_return) = (sjs_array_char*)malloc(sizeof(sjs_array_char));
#line 198
    (*_return)->_refCount = 1;
#line 200
    (*_return)->v = newv;
#line 200
    sjf_array_char_heap((*_return));
}

void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_char_destroy(sjs_array_char* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !true && !false
#line 381
        char* p = (char*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_char_getat(sjs_array_char* _parent, int32_t index, char* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    char* p = (char*)arr->data;
#line 48
    #line 42 "lib/sj-lib-common/array.sj"
(*_return) = p[index];
return;;       
}

void sjf_array_char_getcount(sjs_array_char* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return) {
#line 37 "lib/sj-lib-common/array.sj"
    #line 36 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_char_heap(sjs_array_char* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_char_initat(sjs_array_char* _parent, int32_t index, char item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    char* p = (char*)arr->data;
#line 63
    #line 52 "lib/sj-lib-common/array.sj"
p[index] = item;
;
#line 64
    arr->count = index + 1;
}

void sjf_array_string(sjs_array_string* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_string_asstring(sjs_array_string* _parent, sjs_string* sep, sjs_string* _return) {
    int32_t i;
    sjs_string result = { -1 };
    int32_t sjt_forEnd5;
    int32_t sjt_forStart5;

    result._refCount = 1;
#line 295 "lib/sj-lib-common/array.sj"
    result.offset = 0;
#line 295
    result.count = 0;
#line 295
    result.data._refCount = 1;
#line 295
    result.data.v = &sjg_string9;
#line 295
    sjf_array_char(&result.data);
#line 16 "lib/sj-lib-common/string.sj"
    result._isnullterminated = false;
#line 16
    sjf_string(&result);
#line 296 "lib/sj-lib-common/array.sj"
    sjt_forStart5 = 0;
#line 296
    sjf_array_string_getcount(_parent, &sjt_forEnd5);
#line 296
    i = sjt_forStart5;
    while (i < sjt_forEnd5) {
        sjs_string sjt_call26 = { -1 };
        sjs_string sjt_call27 = { -1 };
        sjs_string sjt_funcold2 = { -1 };
        sjs_string sjt_funcold3 = { -1 };
        sjs_string* sjt_functionParam58 = 0;
        int32_t sjt_functionParam59;
        sjs_string* sjt_parent35 = 0;
        sjs_string* sjt_parent36 = 0;

        if (i != 0) {
            sjs_string* sjt_functionParam57 = 0;
            sjs_string* sjt_parent34 = 0;

#line 18 "lib/sj-lib-common/string.sj"
            sjt_parent34 = &result;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam57 = sep;
#line 294
            sjf_string_add(sjt_parent34, sjt_functionParam57, &sjt_funcold2);
#line 294
            if (result._refCount == 1) { sjf_string_destroy(&result); }
;
#line 18 "lib/sj-lib-common/string.sj"
            sjf_string_copy(&result, &sjt_funcold2);
        }

#line 18 "lib/sj-lib-common/string.sj"
        sjt_parent35 = &result;
#line 296 "lib/sj-lib-common/array.sj"
        sjt_functionParam59 = i;
#line 296
        sjf_array_string_getat(_parent, sjt_functionParam59, &sjt_call27);
#line 300
        sjt_parent36 = &sjt_call27;
#line 300
        sjf_string_asstring(sjt_parent36, &sjt_call26);
#line 300
        sjt_functionParam58 = &sjt_call26;
#line 300
        sjf_string_add(sjt_parent35, sjt_functionParam58, &sjt_funcold3);
#line 300
        if (result._refCount == 1) { sjf_string_destroy(&result); }
;
#line 18 "lib/sj-lib-common/string.sj"
        sjf_string_copy(&result, &sjt_funcold3);
#line 296 "lib/sj-lib-common/array.sj"
        i++;

        if (sjt_call26._refCount == 1) { sjf_string_destroy(&sjt_call26); }
;
        if (sjt_call27._refCount == 1) { sjf_string_destroy(&sjt_call27); }
;
        if (sjt_funcold2._refCount == 1) { sjf_string_destroy(&sjt_funcold2); }
;
        if (sjt_funcold3._refCount == 1) { sjf_string_destroy(&sjt_funcold3); }
;
    }

#line 296
    _return->_refCount = 1;
#line 294
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
#line 295 "lib/sj-lib-common/array.sj"
    result.offset = 0;
#line 295
    result.count = 0;
#line 295
    result.data._refCount = 1;
#line 295
    result.data.v = &sjg_string9;
#line 295
    sjf_array_char(&result.data);
#line 16 "lib/sj-lib-common/string.sj"
    result._isnullterminated = false;
#line 16
    sjf_string(&result);
#line 296 "lib/sj-lib-common/array.sj"
    sjt_forStart6 = 0;
#line 296
    sjf_array_string_getcount(_parent, &sjt_forEnd6);
#line 296
    i = sjt_forStart6;
    while (i < sjt_forEnd6) {
        sjs_string sjt_call28 = { -1 };
        sjs_string sjt_call29 = { -1 };
        sjs_string sjt_funcold4 = { -1 };
        sjs_string sjt_funcold5 = { -1 };
        sjs_string* sjt_functionParam61 = 0;
        int32_t sjt_functionParam62;
        sjs_string* sjt_parent38 = 0;
        sjs_string* sjt_parent39 = 0;

        if (i != 0) {
            sjs_string* sjt_functionParam60 = 0;
            sjs_string* sjt_parent37 = 0;

#line 18 "lib/sj-lib-common/string.sj"
            sjt_parent37 = &result;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam60 = sep;
#line 294
            sjf_string_add(sjt_parent37, sjt_functionParam60, &sjt_funcold4);
#line 294
            if (result._refCount == 1) { sjf_string_destroy(&result); }
;
#line 18 "lib/sj-lib-common/string.sj"
            sjf_string_copy(&result, &sjt_funcold4);
        }

#line 18 "lib/sj-lib-common/string.sj"
        sjt_parent38 = &result;
#line 296 "lib/sj-lib-common/array.sj"
        sjt_functionParam62 = i;
#line 296
        sjf_array_string_getat(_parent, sjt_functionParam62, &sjt_call29);
#line 300
        sjt_parent39 = &sjt_call29;
#line 300
        sjf_string_asstring(sjt_parent39, &sjt_call28);
#line 300
        sjt_functionParam61 = &sjt_call28;
#line 300
        sjf_string_add(sjt_parent38, sjt_functionParam61, &sjt_funcold5);
#line 300
        if (result._refCount == 1) { sjf_string_destroy(&result); }
;
#line 18 "lib/sj-lib-common/string.sj"
        sjf_string_copy(&result, &sjt_funcold5);
#line 296 "lib/sj-lib-common/array.sj"
        i++;

        if (sjt_call28._refCount == 1) { sjf_string_destroy(&sjt_call28); }
;
        if (sjt_call29._refCount == 1) { sjf_string_destroy(&sjt_call29); }
;
        if (sjt_funcold4._refCount == 1) { sjf_string_destroy(&sjt_funcold4); }
;
        if (sjt_funcold5._refCount == 1) { sjf_string_destroy(&sjt_funcold5); }
;
    }

#line 296
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 296
    (*_return)->_refCount = 1;
#line 294
    sjf_string_copy((*_return), &result);

    if (result._refCount == 1) { sjf_string_destroy(&result); }
;
}

void sjf_array_string_clone(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string* _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(sjs_string), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    sjs_string* p = (sjs_string*)arr->data + offset;
#line 187
    sjs_string* newp = (sjs_string*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if false
#line 193
    memcpy(newp, p, sizeof(sjs_string) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        newp[i]._refCount = 1;
#line 170 "lib/sj-lib-common/array.sj"
sjf_string_copy(&newp[i], &p[i]);
;
#line 197
    }
#line 198
    #endif
#line 198
    _return->_refCount = 1;
#line 200
    _return->v = newv;
#line 200
    sjf_array_string(_return);
}

void sjf_array_string_clone_heap(sjs_array_string* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_string** _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(sjs_string), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    sjs_string* p = (sjs_string*)arr->data + offset;
#line 187
    sjs_string* newp = (sjs_string*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if false
#line 193
    memcpy(newp, p, sizeof(sjs_string) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        newp[i]._refCount = 1;
#line 170 "lib/sj-lib-common/array.sj"
sjf_string_copy(&newp[i], &p[i]);
;
#line 197
    }
#line 198
    #endif
#line 198
    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
#line 198
    (*_return)->_refCount = 1;
#line 200
    (*_return)->v = newv;
#line 200
    sjf_array_string_heap((*_return));
}

void sjf_array_string_copy(sjs_array_string* _this, sjs_array_string* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_string_destroy(sjs_array_string* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !false && !true
#line 381
        sjs_string* p = (sjs_string*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_string_getat(sjs_array_string* _parent, int32_t index, sjs_string* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_string* p = (sjs_string*)arr->data;
#line 48
    _return->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_string_copy(_return, &p[index]);
return;;       
}

void sjf_array_string_getat_heap(sjs_array_string* _parent, int32_t index, sjs_string** _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_string* p = (sjs_string*)arr->data;
#line 48
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
(*_return)->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_string_copy((*_return), &p[index]);
return;;       
}

void sjf_array_string_getcount(sjs_array_string* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_string_gettotalcount(sjs_array_string* _parent, int32_t* _return) {
#line 37 "lib/sj-lib-common/array.sj"
    #line 36 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_string_heap(sjs_array_string* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_string_initat(sjs_array_string* _parent, int32_t index, sjs_string* item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    sjs_string* p = (sjs_string*)arr->data;
#line 63
    p[index]._refCount = 1;
#line 52 "lib/sj-lib-common/array.sj"
sjf_string_copy(&p[index], item);
;
#line 64
    arr->count = index + 1;
}

void sjf_array_value(sjs_array_value* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_value_destroy(sjs_array_value* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !false && !true
#line 381
        sjs_json_value* p = (sjs_json_value*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 48
    _return->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(_return, &p[index]);
return;;       
}

void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 48
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
(*_return)->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_json_value_copy((*_return), &p[index]);
return;;       
}

void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_value_heap(sjs_array_value* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 63
    p[index]._refCount = 1;
#line 52 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(&p[index], item);
;
#line 64
    arr->count = index + 1;
}

void sjf_array_value_map_string(sjs_array_value* _parent, cb_value_string cb, sjs_array_string* _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd7;
    int32_t sjt_forStart7;

#line 115 "lib/sj-lib-common/array.sj"
    newdata = 0;
#line 117
    sjs_array* arr = (sjs_array*)_parent->v;
#line 118
    sjs_array* newArr = createarray(sizeof(sjs_string), arr->count);
#line 119
    newArr->count = arr->count;
#line 120
    newdata = (void*)newArr;
#line 122
    sjt_forStart7 = 0;
#line 122
    sjf_array_value_getcount(_parent, &sjt_forEnd7);
#line 122
    i = sjt_forStart7;
    while (i < sjt_forEnd7) {
        sjs_string newitem = { -1 };
        sjs_json_value sjt_call31 = { -1 };
        sjs_json_value* sjt_functionParam63 = 0;
        int32_t sjt_functionParam64;

#line 122 "lib/sj-lib-common/array.sj"
        sjt_functionParam64 = i;
#line 122
        sjf_array_value_getat(_parent, sjt_functionParam64, &sjt_call31);
#line 123
        sjt_functionParam63 = &sjt_call31;
#line 123
        cb._cb(cb._parent, sjt_functionParam63, &newitem);
#line 125
        sjs_string* p = (sjs_string*)newArr->data;
#line 126
        p[i]._refCount = 1;
#line 124 "lib/sj-lib-common/array.sj"
sjf_string_copy(&p[i], &newitem);
;
#line 122
        i++;

        if (newitem._refCount == 1) { sjf_string_destroy(&newitem); }
;
        if (sjt_call31._refCount == 1) { sjf_json_value_destroy(&sjt_call31); }
;
    }

#line 122
    _return->_refCount = 1;
#line 129
    _return->v = newdata;
#line 129
    sjf_array_string(_return);
}

void sjf_array_value_map_string_heap(sjs_array_value* _parent, cb_value_string cb, sjs_array_string** _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd8;
    int32_t sjt_forStart8;

#line 115 "lib/sj-lib-common/array.sj"
    newdata = 0;
#line 117
    sjs_array* arr = (sjs_array*)_parent->v;
#line 118
    sjs_array* newArr = createarray(sizeof(sjs_string), arr->count);
#line 119
    newArr->count = arr->count;
#line 120
    newdata = (void*)newArr;
#line 122
    sjt_forStart8 = 0;
#line 122
    sjf_array_value_getcount(_parent, &sjt_forEnd8);
#line 122
    i = sjt_forStart8;
    while (i < sjt_forEnd8) {
        sjs_string newitem = { -1 };
        sjs_json_value sjt_call32 = { -1 };
        sjs_json_value* sjt_functionParam65 = 0;
        int32_t sjt_functionParam66;

#line 122 "lib/sj-lib-common/array.sj"
        sjt_functionParam66 = i;
#line 122
        sjf_array_value_getat(_parent, sjt_functionParam66, &sjt_call32);
#line 123
        sjt_functionParam65 = &sjt_call32;
#line 123
        cb._cb(cb._parent, sjt_functionParam65, &newitem);
#line 125
        sjs_string* p = (sjs_string*)newArr->data;
#line 126
        p[i]._refCount = 1;
#line 124 "lib/sj-lib-common/array.sj"
sjf_string_copy(&p[i], &newitem);
;
#line 122
        i++;

        if (newitem._refCount == 1) { sjf_string_destroy(&newitem); }
;
        if (sjt_call32._refCount == 1) { sjf_json_value_destroy(&sjt_call32); }
;
    }

#line 122
    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
#line 122
    (*_return)->_refCount = 1;
#line 129
    (*_return)->v = newdata;
#line 129
    sjf_array_string_heap((*_return));
}

void sjf_bool_asjson_value(bool x, sjs_json_value* _return) {
    sjs_string sjt_call3 = { -1 };
    bool sjt_functionParam9;

    _return->_refCount = 1;
#line 102 "lib/sj-lib-json/value.sj"
    sjt_functionParam9 = x;
#line 102
    sjf_bool_asstring(sjt_functionParam9, &sjt_call3);
#line 104
    sjs_string* copyoption19 = &sjt_call3;
    if (copyoption19 != 0) {
        _return->s._refCount = 1;
#line 104 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_return->s, copyoption19);
    } else {
        _return->s._refCount = -1;
    }

#line 4
    _return->a._refCount = -1;
#line 5
    _return->h._refCount = -1;
#line 5
    sjf_json_value(_return);

    if (sjt_call3._refCount == 1) { sjf_string_destroy(&sjt_call3); }
;
}

void sjf_bool_asjson_value_heap(bool x, sjs_json_value** _return) {
    sjs_string sjt_call4 = { -1 };
    bool sjt_functionParam10;

    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
#line 102 "lib/sj-lib-json/value.sj"
    sjt_functionParam10 = x;
#line 102
    sjf_bool_asstring(sjt_functionParam10, &sjt_call4);
#line 104
    sjs_string* copyoption20 = &sjt_call4;
    if (copyoption20 != 0) {
        (*_return)->s._refCount = 1;
#line 104 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&(*_return)->s, copyoption20);
    } else {
        (*_return)->s._refCount = -1;
    }

#line 4
    (*_return)->a._refCount = -1;
#line 5
    (*_return)->h._refCount = -1;
#line 5
    sjf_json_value_heap((*_return));

    if (sjt_call4._refCount == 1) { sjf_string_destroy(&sjt_call4); }
;
}

void sjf_bool_asstring(bool val, sjs_string* _return) {
    if (val) {
        _return->_refCount = 1;
#line 3 "lib/sj-lib-common/bool.sj"
        _return->offset = 0;
#line 3
        _return->count = 4;
#line 3
        _return->data._refCount = 1;
#line 3
        _return->data.v = &sjg_string3;
#line 3
        sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->_isnullterminated = false;
#line 16
        sjf_string(_return);
    } else {
        _return->_refCount = 1;
#line 5 "lib/sj-lib-common/bool.sj"
        _return->offset = 0;
#line 5
        _return->count = 5;
#line 5
        _return->data._refCount = 1;
#line 5
        _return->data.v = &sjg_string2;
#line 5
        sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->_isnullterminated = false;
#line 16
        sjf_string(_return);
    }
}

void sjf_bool_asstring_heap(bool val, sjs_string** _return) {
    if (val) {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
#line 3 "lib/sj-lib-common/bool.sj"
        (*_return)->offset = 0;
#line 3
        (*_return)->count = 4;
#line 3
        (*_return)->data._refCount = 1;
#line 3
        (*_return)->data.v = &sjg_string3;
#line 3
        sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->_isnullterminated = false;
#line 16
        sjf_string_heap((*_return));
    } else {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
#line 5 "lib/sj-lib-common/bool.sj"
        (*_return)->offset = 0;
#line 5
        (*_return)->count = 5;
#line 5
        (*_return)->data._refCount = 1;
#line 5
        (*_return)->data.v = &sjg_string2;
#line 5
        sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->_isnullterminated = false;
#line 16
        sjf_string_heap((*_return));
    }
}

void sjf_debug_writeline(sjs_string* data) {
#line 10 "lib/sj-lib-common/debug.sj"
    debugout("%s\n", string_char(data));
}

void sjf_f32_asjson_value(float x, sjs_json_value* _return) {
    sjs_string sjt_call5 = { -1 };
    float sjt_functionParam12;

    _return->_refCount = 1;
#line 96 "lib/sj-lib-json/value.sj"
    sjt_functionParam12 = x;
#line 96
    sjf_f32_asstring(sjt_functionParam12, &sjt_call5);
#line 98
    sjs_string* copyoption21 = &sjt_call5;
    if (copyoption21 != 0) {
        _return->s._refCount = 1;
#line 98 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_return->s, copyoption21);
    } else {
        _return->s._refCount = -1;
    }

#line 4
    _return->a._refCount = -1;
#line 5
    _return->h._refCount = -1;
#line 5
    sjf_json_value(_return);

    if (sjt_call5._refCount == 1) { sjf_string_destroy(&sjt_call5); }
;
}

void sjf_f32_asjson_value_heap(float x, sjs_json_value** _return) {
    sjs_string sjt_call6 = { -1 };
    float sjt_functionParam13;

    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
#line 96 "lib/sj-lib-json/value.sj"
    sjt_functionParam13 = x;
#line 96
    sjf_f32_asstring(sjt_functionParam13, &sjt_call6);
#line 98
    sjs_string* copyoption22 = &sjt_call6;
    if (copyoption22 != 0) {
        (*_return)->s._refCount = 1;
#line 98 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&(*_return)->s, copyoption22);
    } else {
        (*_return)->s._refCount = -1;
    }

#line 4
    (*_return)->a._refCount = -1;
#line 5
    (*_return)->h._refCount = -1;
#line 5
    sjf_json_value_heap((*_return));

    if (sjt_call6._refCount == 1) { sjf_string_destroy(&sjt_call6); }
;
}

void sjf_f32_asstring(float val, sjs_string* _return) {
    int32_t count;
    void* v;

#line 94 "lib/sj-lib-common/f32.sj"
    v = 0;
#line 95
    count = 0;
#line 97
    sjs_array* arr = createarray(1, 256);
#line 98
    snprintf(arr->data, 256, "%f", val);
#line 99
    arr->count = (int)strlen(arr->data);
#line 100
    count = arr->count;
#line 101
    v = arr;
#line 101
    _return->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
    _return->offset = 0;
#line 103 "lib/sj-lib-common/f32.sj"
    _return->count = count;
#line 103
    _return->data._refCount = 1;
#line 103
    _return->data.v = v;
#line 103
    sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
    _return->_isnullterminated = false;
#line 16
    sjf_string(_return);
}

void sjf_f32_asstring_heap(float val, sjs_string** _return) {
    int32_t count;
    void* v;

#line 94 "lib/sj-lib-common/f32.sj"
    v = 0;
#line 95
    count = 0;
#line 97
    sjs_array* arr = createarray(1, 256);
#line 98
    snprintf(arr->data, 256, "%f", val);
#line 99
    arr->count = (int)strlen(arr->data);
#line 100
    count = arr->count;
#line 101
    v = arr;
#line 101
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 101
    (*_return)->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
    (*_return)->offset = 0;
#line 103 "lib/sj-lib-common/f32.sj"
    (*_return)->count = count;
#line 103
    (*_return)->data._refCount = 1;
#line 103
    (*_return)->data.v = v;
#line 103
    sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
    (*_return)->_isnullterminated = false;
#line 16
    sjf_string_heap((*_return));
}

void sjf_halt(sjs_string* reason) {
#line 3 "lib/sj-lib-common/halt.sj"
    halt("%s\n", string_char(reason));
}

void sjf_hash_bang_string_json_value_asjson_value(sjs_hash_string_value* x, sjs_json_value* _return) {
    _return->_refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
    _return->s._refCount = -1;
#line 4
    _return->a._refCount = -1;
#line 114
    sjs_hash_string_value* copyoption27 = x;
    if (copyoption27 != 0) {
        _return->h._refCount = 1;
#line 114 "lib/sj-lib-json/value.sj"
        sjf_hash_string_value_copy(&_return->h, copyoption27);
    } else {
        _return->h._refCount = -1;
    }

#line 114
    sjf_json_value(_return);
}

void sjf_hash_bang_string_json_value_asjson_value_heap(sjs_hash_string_value* x, sjs_json_value** _return) {
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
    (*_return)->s._refCount = -1;
#line 4
    (*_return)->a._refCount = -1;
#line 114
    sjs_hash_string_value* copyoption28 = x;
    if (copyoption28 != 0) {
        (*_return)->h._refCount = 1;
#line 114 "lib/sj-lib-json/value.sj"
        sjf_hash_string_value_copy(&(*_return)->h, copyoption28);
    } else {
        (*_return)->h._refCount = -1;
    }

#line 114
    sjf_json_value_heap((*_return));
}

void sjf_hash_string_value(sjs_hash_string_value* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key) {
#line 188 "lib/sj-lib-common/hash.sj"
    #if false
#line 189
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;    
#line 190
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 191
    if (k != kh_end(p)) {
#line 192
        kh_del(string_value_hash_type, p, k);
#line 193
    }
#line 194
    #endif
}

void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val) {
#line 200 "lib/sj-lib-common/hash.sj"
    #if false
#line 201
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 202
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 203
        if (kh_exist(p, k)) {
#line 204
            sjs_json_value t = kh_value(p, k);
#line 205
            if (t == val) {
#line 206
                kh_del(string_value_hash_type, p, k);
#line 207
            }
#line 208
        }
#line 209
    }
#line 210
    #endif
}

void sjf_hash_string_value_asarray_string(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string* _return) {
    sjs_list_string result = { -1 };
    sjs_lambda1 sjt_call40 = { -1 };
    cb_string_value_void sjt_functionParam71;

    result._refCount = 1;
    result.arr._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
    result.arr.v = 0;
#line 27
    sjf_array_string(&result.arr);
#line 27
    sjf_list_string(&result);
#line 172 "lib/sj-lib-common/hash.sj"
    sjs_lambda1* lambainit1;
#line 172
    sjt_call40._refCount = 1;
#line 172
    sjt_call40.lambdaparam1 = &result;
#line 170
    sjt_call40.lambdaparam2 = cb;
#line 170
    sjt_call40.lambdaparam3 = cb;
#line 170
    sjf_lambda1(&sjt_call40);
#line 172
    lambainit1 = &sjt_call40;
#line 172
    sjt_functionParam71._parent = (sjs_object*)lambainit1;
#line 172
    sjt_functionParam71._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*))sjf_lambda1_invoke;
#line 172
    sjf_hash_string_value_each(_parent, sjt_functionParam71);
#line 172
    _return->_refCount = 1;
#line 170
    sjf_array_string_copy(_return, &(&result)->arr);

    if (result._refCount == 1) { sjf_list_string_destroy(&result); }
;
    if (sjt_call40._refCount == 1) { sjf_lambda1_destroy(&sjt_call40); }
;
}

void sjf_hash_string_value_asarray_string_heap(sjs_hash_string_value* _parent, cb_string_value_string cb, sjs_array_string** _return) {
    sjs_list_string result = { -1 };
    sjs_lambda1 sjt_call42 = { -1 };
    cb_string_value_void sjt_functionParam82;

    result._refCount = 1;
    result.arr._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
    result.arr.v = 0;
#line 27
    sjf_array_string(&result.arr);
#line 27
    sjf_list_string(&result);
#line 172 "lib/sj-lib-common/hash.sj"
    sjs_lambda1* lambainit2;
#line 172
    sjt_call42._refCount = 1;
#line 172
    sjt_call42.lambdaparam1 = &result;
#line 170
    sjt_call42.lambdaparam2 = cb;
#line 170
    sjt_call42.lambdaparam3 = cb;
#line 170
    sjf_lambda1(&sjt_call42);
#line 172
    lambainit2 = &sjt_call42;
#line 172
    sjt_functionParam82._parent = (sjs_object*)lambainit2;
#line 172
    sjt_functionParam82._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*))sjf_lambda1_invoke;
#line 172
    sjf_hash_string_value_each(_parent, sjt_functionParam82);
#line 172
    (*_return) = (sjs_array_string*)malloc(sizeof(sjs_array_string));
#line 172
    (*_return)->_refCount = 1;
#line 170
    sjf_array_string_copy((*_return), &(&result)->arr);

    if (result._refCount == 1) { sjf_list_string_destroy(&result); }
;
    if (sjt_call42._refCount == 1) { sjf_lambda1_destroy(&sjt_call42); }
;
}

void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from) {
#line 238 "lib/sj-lib-common/hash.sj"
    _this->_hash = _from->_hash;
#line 239
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
#line 240
    p->refcount++;
}

void sjf_hash_string_value_destroy(sjs_hash_string_value* _this) {
#line 244 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
#line 245
    p->refcount--;
#line 246
    if (p->refcount == 0) {
#line 247
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 248
            if (kh_exist(p, k)) {
#line 250
                #if false
#line 251
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
#line 252
                weakptr_cb_remove(kh_key(p, k), cb);
#line 253
                #else
#line 254
                ;
#line 255
                #endif
#line 257
                #if false
#line 258
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
#line 259
                weakptr_cb_remove(kh_value(p, k), cb);
#line 260
                #else
#line 261
                ;
#line 262
                #endif
#line 263
            }
#line 264
        }
#line 265
        kh_destroy(string_value_hash_type, (khash_t(string_value_hash_type)*)_this->_hash);
#line 266
    }
}

void sjf_hash_string_value_each(sjs_hash_string_value* _parent, cb_string_value_void cb) {
#line 98 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 99
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 100
        if (kh_exist(p, k)) {
#line 101
            cb._cb(
#line 102
            cb._parent, 
#line 103
            #if true
#line 104
            &kh_key(p, k), 
#line 105
            #else
#line 106
            kh_key(p, k), 
#line 107
            #endif
#line 109
            #if true
#line 110
            &kh_value(p, k)
#line 111
            #else
#line 112
            kh_value(p, k)
#line 113
            #endif
#line 114
            );
#line 115
        }
#line 116
    }
}

void sjf_hash_string_value_heap(sjs_hash_string_value* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value_resize(sjs_hash_string_value* _parent, int32_t newbuckets) {
#line 16 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 17
    kh_resize(string_value_hash_type, p, newbuckets);
}

void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val) {
#line 40 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 42
    #if true
#line 43
    khiter_t k = kh_get(string_value_hash_type, p, *key);
#line 44
    #else
#line 45
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 46
    #endif
#line 48
    if (k != kh_end(p)) {            
#line 49
    ;
#line 50
}
#line 52
int ret;
#line 53
#if true
#line 54
k = kh_put(string_value_hash_type, p, *key, &ret);
#line 55
#else
#line 56
k = kh_put(string_value_hash_type, p, key, &ret);
#line 57
#endif
#line 59
if (!ret) kh_del(string_value_hash_type, p, k);
#line 61
#if false
#line 62
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
#line 63
weakptr_cb_add(key, cb);
#line 64
#else
#line 65
sjs_string t;
#line 66
t._refCount = 1;
#line 38 "lib/sj-lib-common/hash.sj"
sjf_string_copy(&t, key);
;
#line 67
#endif
#line 69
#if false
#line 70
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
#line 71
weakptr_cb_add(val, cb);
#line 72
kh_val(p, k) = val;
#line 73
#else
#line 74
kh_val(p, k)._refCount = 1;
#line 38 "lib/sj-lib-common/hash.sj"
sjf_json_value_copy(&kh_val(p, k), val);
;
#line 75
#endif
}

void sjf_hash_type_bool(sjs_hash_type_bool* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key) {
#line 188 "lib/sj-lib-common/hash.sj"
    #if false
#line 189
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;    
#line 190
    khiter_t k = kh_get(type_bool_hash_type, p, key);
#line 191
    if (k != kh_end(p)) {
#line 192
        kh_del(type_bool_hash_type, p, k);
#line 193
    }
#line 194
    #endif
}

void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val) {
#line 200 "lib/sj-lib-common/hash.sj"
    #if false
#line 201
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;
#line 202
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 203
        if (kh_exist(p, k)) {
#line 204
            bool t = kh_value(p, k);
#line 205
            if (t == val) {
#line 206
                kh_del(type_bool_hash_type, p, k);
#line 207
            }
#line 208
        }
#line 209
    }
#line 210
    #endif
}

void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from) {
#line 238 "lib/sj-lib-common/hash.sj"
    _this->_hash = _from->_hash;
#line 239
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 240
    p->refcount++;
}

void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this) {
#line 244 "lib/sj-lib-common/hash.sj"
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 245
    p->refcount--;
#line 246
    if (p->refcount == 0) {
#line 247
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 248
            if (kh_exist(p, k)) {
#line 250
                #if false
#line 251
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovekey };
#line 252
                weakptr_cb_remove(kh_key(p, k), cb);
#line 253
                #else
#line 254
                ;
#line 255
                #endif
#line 257
                #if false
#line 258
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovevalue };
#line 259
                weakptr_cb_remove(kh_value(p, k), cb);
#line 260
                #else
#line 261
                ;
#line 262
                #endif
#line 263
            }
#line 264
        }
#line 265
        kh_destroy(type_bool_hash_type, (khash_t(type_bool_hash_type)*)_this->_hash);
#line 266
    }
}

void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_i32_asjson_value(int32_t x, sjs_json_value* _return) {
    sjs_string sjt_call1 = { -1 };
    int32_t sjt_functionParam4;
    int32_t sjt_functionParam5;

    _return->_refCount = 1;
#line 90 "lib/sj-lib-json/value.sj"
    sjt_functionParam4 = x;
#line 22 "lib/sj-lib-common/i32.sj"
    sjt_functionParam5 = 10;
#line 22
    sjf_i32_asstring(sjt_functionParam4, sjt_functionParam5, &sjt_call1);
#line 92 "lib/sj-lib-json/value.sj"
    sjs_string* copyoption17 = &sjt_call1;
    if (copyoption17 != 0) {
        _return->s._refCount = 1;
#line 92 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_return->s, copyoption17);
    } else {
        _return->s._refCount = -1;
    }

#line 4
    _return->a._refCount = -1;
#line 5
    _return->h._refCount = -1;
#line 5
    sjf_json_value(_return);

    if (sjt_call1._refCount == 1) { sjf_string_destroy(&sjt_call1); }
;
}

void sjf_i32_asjson_value_heap(int32_t x, sjs_json_value** _return) {
    sjs_string sjt_call2 = { -1 };
    int32_t sjt_functionParam6;
    int32_t sjt_functionParam7;

    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
#line 90 "lib/sj-lib-json/value.sj"
    sjt_functionParam6 = x;
#line 22 "lib/sj-lib-common/i32.sj"
    sjt_functionParam7 = 10;
#line 22
    sjf_i32_asstring(sjt_functionParam6, sjt_functionParam7, &sjt_call2);
#line 92 "lib/sj-lib-json/value.sj"
    sjs_string* copyoption18 = &sjt_call2;
    if (copyoption18 != 0) {
        (*_return)->s._refCount = 1;
#line 92 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&(*_return)->s, copyoption18);
    } else {
        (*_return)->s._refCount = -1;
    }

#line 4
    (*_return)->a._refCount = -1;
#line 5
    (*_return)->h._refCount = -1;
#line 5
    sjf_json_value_heap((*_return));

    if (sjt_call2._refCount == 1) { sjf_string_destroy(&sjt_call2); }
;
}

void sjf_i32_asstring(int32_t val, int32_t base, sjs_string* _return) {
    int32_t count;
    void* vresult;

#line 23 "lib/sj-lib-common/i32.sj"
    count = 0;
#line 24
    vresult = 0;
#line 26
    sjs_array* arr = createarray(1, 256);
#line 27
    vresult = (void*)arr;
#line 28
    char *tmp = (char*)arr->data + 128;
#line 29
    char *tp = (char*)arr->data + 128;
#line 30
    int i;
#line 31
    unsigned v;
#line 33
    int sign = (base == 10 && val < 0);    
#line 34
    if (sign)
#line 35
    v = -val;
#line 36
    else
#line 37
    v = (unsigned)val;
#line 39
    while (v || tp == tmp)
#line 40
    {
#line 41
        i = v % base;
#line 42
        v /= base; // v/=base uses less CPU clocks than v=v/base does
#line 43
        if (i < 10)
#line 44
        *tp++ = i + '0';
#line 45
        else
#line 46
        *tp++ = i + 'a' - 10;
#line 47
    }
#line 49
    int len = tp - tmp;
#line 51
    char* sp = (char*)arr->data;
#line 52
    if (sign) 
#line 53
    {
#line 54
        *sp++ = '-';
#line 55
        len++;
#line 56
    }
#line 58
    while (tp > tmp)
#line 59
    *sp++ = *--tp;
#line 61
    arr->count = len;
#line 62
    count = len;
#line 62
    _return->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
    _return->offset = 0;
#line 64 "lib/sj-lib-common/i32.sj"
    _return->count = count;
#line 64
    _return->data._refCount = 1;
#line 64
    _return->data.v = vresult;
#line 64
    sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
    _return->_isnullterminated = false;
#line 16
    sjf_string(_return);
}

void sjf_i32_asstring_heap(int32_t val, int32_t base, sjs_string** _return) {
    int32_t count;
    void* vresult;

#line 23 "lib/sj-lib-common/i32.sj"
    count = 0;
#line 24
    vresult = 0;
#line 26
    sjs_array* arr = createarray(1, 256);
#line 27
    vresult = (void*)arr;
#line 28
    char *tmp = (char*)arr->data + 128;
#line 29
    char *tp = (char*)arr->data + 128;
#line 30
    int i;
#line 31
    unsigned v;
#line 33
    int sign = (base == 10 && val < 0);    
#line 34
    if (sign)
#line 35
    v = -val;
#line 36
    else
#line 37
    v = (unsigned)val;
#line 39
    while (v || tp == tmp)
#line 40
    {
#line 41
        i = v % base;
#line 42
        v /= base; // v/=base uses less CPU clocks than v=v/base does
#line 43
        if (i < 10)
#line 44
        *tp++ = i + '0';
#line 45
        else
#line 46
        *tp++ = i + 'a' - 10;
#line 47
    }
#line 49
    int len = tp - tmp;
#line 51
    char* sp = (char*)arr->data;
#line 52
    if (sign) 
#line 53
    {
#line 54
        *sp++ = '-';
#line 55
        len++;
#line 56
    }
#line 58
    while (tp > tmp)
#line 59
    *sp++ = *--tp;
#line 61
    arr->count = len;
#line 62
    count = len;
#line 62
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 62
    (*_return)->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
    (*_return)->offset = 0;
#line 64 "lib/sj-lib-common/i32.sj"
    (*_return)->count = count;
#line 64
    (*_return)->data._refCount = 1;
#line 64
    (*_return)->data.v = vresult;
#line 64
    sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
    (*_return)->_isnullterminated = false;
#line 16
    sjf_string_heap((*_return));
}

void sjf_i32_max(int32_t a, int32_t b, int32_t* _return) {
    if (a < b) {
#line 6 "lib/sj-lib-common/i32.sj"
        (*_return) = b;
    } else {
#line 6 "lib/sj-lib-common/i32.sj"
        (*_return) = a;
    }
}

void sjf_json_value(sjs_json_value* _this) {
}

void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from) {
#line 2 "lib/sj-lib-json/value.sj"
    sjs_string* copyoption14 = (_from->s._refCount != -1 ? &_from->s : 0);
    if (copyoption14 != 0) {
        _this->s._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_this->s, copyoption14);
    } else {
        _this->s._refCount = -1;
    }

#line 2
    sjs_array_value* copyoption15 = (_from->a._refCount != -1 ? &_from->a : 0);
    if (copyoption15 != 0) {
        _this->a._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
        sjf_array_value_copy(&_this->a, copyoption15);
    } else {
        _this->a._refCount = -1;
    }

#line 2
    sjs_hash_string_value* copyoption16 = (_from->h._refCount != -1 ? &_from->h : 0);
    if (copyoption16 != 0) {
        _this->h._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
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

void sjf_json_value_pretty(sjs_json_value* _parent, int32_t level, sjs_string* _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue7 = 0;

#line 58 "lib/sj-lib-json/value.sj"
        ifValue7 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 58
        _return->_refCount = 1;
#line 59
        sjf_string_copy(_return, ifValue7);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue8 = 0;
            sjs_string sjt_call71 = { -1 };
            sjs_string sjt_call72 = { -1 };
            sjs_string sjt_call73 = { -1 };
            sjs_string sjt_call74 = { -1 };
            sjs_string sjt_call75 = { -1 };
            sjs_array_string sjt_call76 = { -1 };
            sjs_lambda5 sjt_call77 = { -1 };
            sjs_string sjt_call88 = { -1 };
            sjs_string sjt_call89 = { -1 };
            sjs_string sjt_call90 = { -1 };
            sjs_string sjt_call91 = { -1 };
            sjs_string* sjt_functionParam101 = 0;
            cb_value_string sjt_functionParam102;
            sjs_string* sjt_functionParam117 = 0;
            sjs_string* sjt_functionParam118 = 0;
            sjs_string* sjt_functionParam119 = 0;
            int32_t sjt_functionParam120;
            sjs_string* sjt_functionParam121 = 0;
            sjs_string* sjt_parent73 = 0;
            sjs_string* sjt_parent74 = 0;
            sjs_string* sjt_parent75 = 0;
            sjs_string* sjt_parent76 = 0;
            sjs_array_string* sjt_parent77 = 0;
            sjs_array_value* sjt_parent78 = 0;

#line 61 "lib/sj-lib-json/value.sj"
            ifValue8 = (_parent->a._refCount != -1 ? &_parent->a : 0);
#line 61
            sjt_call74._refCount = 1;
#line 62
            sjt_call74.offset = 0;
#line 62
            sjt_call74.count = 1;
#line 62
            sjt_call74.data._refCount = 1;
#line 62
            sjt_call74.data.v = &sjg_string20;
#line 62
            sjf_array_char(&sjt_call74.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call74._isnullterminated = false;
#line 16
            sjf_string(&sjt_call74);
#line 62 "lib/sj-lib-json/value.sj"
            sjt_parent76 = &sjt_call74;
#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent78 = ifValue8;
#line 62 "lib/sj-lib-json/value.sj"
            sjs_lambda5* lambainit8;
#line 62
            sjt_call77._refCount = 1;
#line 57
            sjt_call77.lambdaparam8 = &level;
#line 57
            sjt_call77.lambdaparam9 = &level;
#line 57
            sjt_call77.lambdaparam10 = &level;
#line 57
            sjt_call77.lambdaparam11 = &level;
#line 57
            sjf_lambda5(&sjt_call77);
#line 62
            lambainit8 = &sjt_call77;
#line 62
            sjt_functionParam102._parent = (sjs_object*)lambainit8;
#line 62
            sjt_functionParam102._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda5_invoke;
#line 62
            sjf_array_value_map_string(sjt_parent78, sjt_functionParam102, &sjt_call76);
#line 62
            sjt_parent77 = &sjt_call76;
#line 62
            sjt_call88._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_call88.offset = 0;
#line 294
            sjt_call88.count = 2;
#line 294
            sjt_call88.data._refCount = 1;
#line 294
            sjt_call88.data.v = &sjg_string12;
#line 294
            sjf_array_char(&sjt_call88.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call88._isnullterminated = false;
#line 16
            sjf_string(&sjt_call88);
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam117 = &sjt_call88;
#line 294
            sjf_array_string_asstring(sjt_parent77, sjt_functionParam117, &sjt_call75);
#line 62 "lib/sj-lib-json/value.sj"
            sjt_functionParam101 = &sjt_call75;
#line 62
            sjf_string_add(sjt_parent76, sjt_functionParam101, &sjt_call73);
#line 62
            sjt_parent75 = &sjt_call73;
#line 62
            sjt_call89._refCount = 1;
#line 64
            sjt_call89.offset = 0;
#line 64
            sjt_call89.count = 1;
#line 64
            sjt_call89.data._refCount = 1;
#line 64
            sjt_call89.data.v = &sjg_string18;
#line 64
            sjf_array_char(&sjt_call89.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call89._isnullterminated = false;
#line 16
            sjf_string(&sjt_call89);
#line 64 "lib/sj-lib-json/value.sj"
            sjt_functionParam118 = &sjt_call89;
#line 64
            sjf_string_add(sjt_parent75, sjt_functionParam118, &sjt_call72);
#line 62
            sjt_parent74 = &sjt_call72;
#line 64
            sjt_functionParam120 = level * 2;
#line 64
            sjf_spaces(sjt_functionParam120, &sjt_call90);
#line 64
            sjt_functionParam119 = &sjt_call90;
#line 64
            sjf_string_add(sjt_parent74, sjt_functionParam119, &sjt_call71);
#line 62
            sjt_parent73 = &sjt_call71;
#line 62
            sjt_call91._refCount = 1;
#line 64
            sjt_call91.offset = 0;
#line 64
            sjt_call91.count = 1;
#line 64
            sjt_call91.data._refCount = 1;
#line 64
            sjt_call91.data.v = &sjg_string21;
#line 64
            sjf_array_char(&sjt_call91.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call91._isnullterminated = false;
#line 16
            sjf_string(&sjt_call91);
#line 64 "lib/sj-lib-json/value.sj"
            sjt_functionParam121 = &sjt_call91;
#line 64
            sjf_string_add(sjt_parent73, sjt_functionParam121, _return);

            if (sjt_call71._refCount == 1) { sjf_string_destroy(&sjt_call71); }
;
            if (sjt_call72._refCount == 1) { sjf_string_destroy(&sjt_call72); }
;
            if (sjt_call73._refCount == 1) { sjf_string_destroy(&sjt_call73); }
;
            if (sjt_call74._refCount == 1) { sjf_string_destroy(&sjt_call74); }
;
            if (sjt_call75._refCount == 1) { sjf_string_destroy(&sjt_call75); }
;
            if (sjt_call76._refCount == 1) { sjf_array_string_destroy(&sjt_call76); }
;
            if (sjt_call77._refCount == 1) { sjf_lambda5_destroy(&sjt_call77); }
;
            if (sjt_call88._refCount == 1) { sjf_string_destroy(&sjt_call88); }
;
            if (sjt_call89._refCount == 1) { sjf_string_destroy(&sjt_call89); }
;
            if (sjt_call90._refCount == 1) { sjf_string_destroy(&sjt_call90); }
;
            if (sjt_call91._refCount == 1) { sjf_string_destroy(&sjt_call91); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue9 = 0;
                sjs_lambda4 sjt_call100 = { -1 };
                sjs_string sjt_call119 = { -1 };
                sjs_string sjt_call120 = { -1 };
                sjs_string sjt_call121 = { -1 };
                sjs_string sjt_call122 = { -1 };
                sjs_string sjt_call92 = { -1 };
                sjs_string sjt_call93 = { -1 };
                sjs_string sjt_call94 = { -1 };
                sjs_string sjt_call95 = { -1 };
                sjs_string sjt_call96 = { -1 };
                sjs_string sjt_call97 = { -1 };
                sjs_string sjt_call98 = { -1 };
                sjs_array_string sjt_call99 = { -1 };
                sjs_string* sjt_functionParam122 = 0;
                int32_t sjt_functionParam123;
                sjs_string* sjt_functionParam124 = 0;
                cb_string_value_string sjt_functionParam125;
                sjs_string* sjt_functionParam140 = 0;
                sjs_string* sjt_functionParam141 = 0;
                sjs_string* sjt_functionParam142 = 0;
                int32_t sjt_functionParam143;
                sjs_string* sjt_functionParam144 = 0;
                sjs_string* sjt_parent89 = 0;
                sjs_string* sjt_parent90 = 0;
                sjs_string* sjt_parent91 = 0;
                sjs_string* sjt_parent92 = 0;
                sjs_string* sjt_parent93 = 0;
                sjs_array_string* sjt_parent94 = 0;
                sjs_hash_string_value* sjt_parent95 = 0;

#line 66 "lib/sj-lib-json/value.sj"
                ifValue9 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 66
                sjt_call96._refCount = 1;
#line 67
                sjt_call96.offset = 0;
#line 67
                sjt_call96.count = 1;
#line 67
                sjt_call96.data._refCount = 1;
#line 67
                sjt_call96.data.v = &sjg_string16;
#line 67
                sjf_array_char(&sjt_call96.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call96._isnullterminated = false;
#line 16
                sjf_string(&sjt_call96);
#line 67 "lib/sj-lib-json/value.sj"
                sjt_parent93 = &sjt_call96;
#line 67
                sjt_functionParam123 = level * 2;
#line 67
                sjf_spaces(sjt_functionParam123, &sjt_call97);
#line 67
                sjt_functionParam122 = &sjt_call97;
#line 67
                sjf_string_add(sjt_parent93, sjt_functionParam122, &sjt_call95);
#line 67
                sjt_parent92 = &sjt_call95;
#line 170 "lib/sj-lib-common/hash.sj"
                sjt_parent95 = ifValue9;
#line 67 "lib/sj-lib-json/value.sj"
                sjs_lambda4* lambainit7;
#line 67
                sjt_call100._refCount = 1;
#line 57
                sjt_call100.lambdaparam4 = &level;
#line 57
                sjt_call100.lambdaparam5 = &level;
#line 57
                sjt_call100.lambdaparam6 = &level;
#line 57
                sjt_call100.lambdaparam7 = &level;
#line 57
                sjf_lambda4(&sjt_call100);
#line 67
                lambainit7 = &sjt_call100;
#line 67
                sjt_functionParam125._parent = (sjs_object*)lambainit7;
#line 67
                sjt_functionParam125._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda4_invoke;
#line 67
                sjf_hash_string_value_asarray_string(sjt_parent95, sjt_functionParam125, &sjt_call99);
#line 67
                sjt_parent94 = &sjt_call99;
#line 67
                sjt_call119._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
                sjt_call119.offset = 0;
#line 294
                sjt_call119.count = 2;
#line 294
                sjt_call119.data._refCount = 1;
#line 294
                sjt_call119.data.v = &sjg_string12;
#line 294
                sjf_array_char(&sjt_call119.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call119._isnullterminated = false;
#line 16
                sjf_string(&sjt_call119);
#line 294 "lib/sj-lib-common/array.sj"
                sjt_functionParam140 = &sjt_call119;
#line 294
                sjf_array_string_asstring(sjt_parent94, sjt_functionParam140, &sjt_call98);
#line 67 "lib/sj-lib-json/value.sj"
                sjt_functionParam124 = &sjt_call98;
#line 67
                sjf_string_add(sjt_parent92, sjt_functionParam124, &sjt_call94);
#line 67
                sjt_parent91 = &sjt_call94;
#line 67
                sjt_call120._refCount = 1;
#line 69
                sjt_call120.offset = 0;
#line 69
                sjt_call120.count = 1;
#line 69
                sjt_call120.data._refCount = 1;
#line 69
                sjt_call120.data.v = &sjg_string18;
#line 69
                sjf_array_char(&sjt_call120.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call120._isnullterminated = false;
#line 16
                sjf_string(&sjt_call120);
#line 69 "lib/sj-lib-json/value.sj"
                sjt_functionParam141 = &sjt_call120;
#line 69
                sjf_string_add(sjt_parent91, sjt_functionParam141, &sjt_call93);
#line 67
                sjt_parent90 = &sjt_call93;
#line 69
                sjt_functionParam143 = level * 2;
#line 69
                sjf_spaces(sjt_functionParam143, &sjt_call121);
#line 69
                sjt_functionParam142 = &sjt_call121;
#line 69
                sjf_string_add(sjt_parent90, sjt_functionParam142, &sjt_call92);
#line 67
                sjt_parent89 = &sjt_call92;
#line 67
                sjt_call122._refCount = 1;
#line 69
                sjt_call122.offset = 0;
#line 69
                sjt_call122.count = 1;
#line 69
                sjt_call122.data._refCount = 1;
#line 69
                sjt_call122.data.v = &sjg_string19;
#line 69
                sjf_array_char(&sjt_call122.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call122._isnullterminated = false;
#line 16
                sjf_string(&sjt_call122);
#line 69 "lib/sj-lib-json/value.sj"
                sjt_functionParam144 = &sjt_call122;
#line 69
                sjf_string_add(sjt_parent89, sjt_functionParam144, _return);

                if (sjt_call100._refCount == 1) { sjf_lambda4_destroy(&sjt_call100); }
;
                if (sjt_call119._refCount == 1) { sjf_string_destroy(&sjt_call119); }
;
                if (sjt_call120._refCount == 1) { sjf_string_destroy(&sjt_call120); }
;
                if (sjt_call121._refCount == 1) { sjf_string_destroy(&sjt_call121); }
;
                if (sjt_call122._refCount == 1) { sjf_string_destroy(&sjt_call122); }
;
                if (sjt_call92._refCount == 1) { sjf_string_destroy(&sjt_call92); }
;
                if (sjt_call93._refCount == 1) { sjf_string_destroy(&sjt_call93); }
;
                if (sjt_call94._refCount == 1) { sjf_string_destroy(&sjt_call94); }
;
                if (sjt_call95._refCount == 1) { sjf_string_destroy(&sjt_call95); }
;
                if (sjt_call96._refCount == 1) { sjf_string_destroy(&sjt_call96); }
;
                if (sjt_call97._refCount == 1) { sjf_string_destroy(&sjt_call97); }
;
                if (sjt_call98._refCount == 1) { sjf_string_destroy(&sjt_call98); }
;
                if (sjt_call99._refCount == 1) { sjf_array_string_destroy(&sjt_call99); }
;
            } else {
                _return->_refCount = 1;
#line 71 "lib/sj-lib-json/value.sj"
                _return->offset = 0;
#line 71
                _return->count = 0;
#line 71
                _return->data._refCount = 1;
#line 71
                _return->data.v = &sjg_string9;
#line 71
                sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
                _return->_isnullterminated = false;
#line 16
                sjf_string(_return);
            }
        }
    }
}

void sjf_json_value_pretty_heap(sjs_json_value* _parent, int32_t level, sjs_string** _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue10 = 0;

#line 58 "lib/sj-lib-json/value.sj"
        ifValue10 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 58
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 58
        (*_return)->_refCount = 1;
#line 59
        sjf_string_copy((*_return), ifValue10);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue11 = 0;
            sjs_string sjt_call123 = { -1 };
            sjs_string sjt_call124 = { -1 };
            sjs_string sjt_call125 = { -1 };
            sjs_string sjt_call126 = { -1 };
            sjs_string sjt_call127 = { -1 };
            sjs_array_string sjt_call128 = { -1 };
            sjs_lambda5 sjt_call129 = { -1 };
            sjs_string sjt_call130 = { -1 };
            sjs_string sjt_call131 = { -1 };
            sjs_string sjt_call132 = { -1 };
            sjs_string sjt_call133 = { -1 };
            sjs_string* sjt_functionParam145 = 0;
            cb_value_string sjt_functionParam146;
            sjs_string* sjt_functionParam147 = 0;
            sjs_string* sjt_functionParam148 = 0;
            sjs_string* sjt_functionParam149 = 0;
            int32_t sjt_functionParam150;
            sjs_string* sjt_functionParam151 = 0;
            sjs_string* sjt_parent108 = 0;
            sjs_string* sjt_parent109 = 0;
            sjs_string* sjt_parent110 = 0;
            sjs_string* sjt_parent111 = 0;
            sjs_array_string* sjt_parent112 = 0;
            sjs_array_value* sjt_parent113 = 0;

#line 61 "lib/sj-lib-json/value.sj"
            ifValue11 = (_parent->a._refCount != -1 ? &_parent->a : 0);
#line 61
            sjt_call126._refCount = 1;
#line 62
            sjt_call126.offset = 0;
#line 62
            sjt_call126.count = 1;
#line 62
            sjt_call126.data._refCount = 1;
#line 62
            sjt_call126.data.v = &sjg_string20;
#line 62
            sjf_array_char(&sjt_call126.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call126._isnullterminated = false;
#line 16
            sjf_string(&sjt_call126);
#line 62 "lib/sj-lib-json/value.sj"
            sjt_parent111 = &sjt_call126;
#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent113 = ifValue11;
#line 62 "lib/sj-lib-json/value.sj"
            sjs_lambda5* lambainit10;
#line 62
            sjt_call129._refCount = 1;
#line 57
            sjt_call129.lambdaparam8 = &level;
#line 57
            sjt_call129.lambdaparam9 = &level;
#line 57
            sjt_call129.lambdaparam10 = &level;
#line 57
            sjt_call129.lambdaparam11 = &level;
#line 57
            sjf_lambda5(&sjt_call129);
#line 62
            lambainit10 = &sjt_call129;
#line 62
            sjt_functionParam146._parent = (sjs_object*)lambainit10;
#line 62
            sjt_functionParam146._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda5_invoke;
#line 62
            sjf_array_value_map_string(sjt_parent113, sjt_functionParam146, &sjt_call128);
#line 62
            sjt_parent112 = &sjt_call128;
#line 62
            sjt_call130._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_call130.offset = 0;
#line 294
            sjt_call130.count = 2;
#line 294
            sjt_call130.data._refCount = 1;
#line 294
            sjt_call130.data.v = &sjg_string12;
#line 294
            sjf_array_char(&sjt_call130.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call130._isnullterminated = false;
#line 16
            sjf_string(&sjt_call130);
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam147 = &sjt_call130;
#line 294
            sjf_array_string_asstring(sjt_parent112, sjt_functionParam147, &sjt_call127);
#line 62 "lib/sj-lib-json/value.sj"
            sjt_functionParam145 = &sjt_call127;
#line 62
            sjf_string_add(sjt_parent111, sjt_functionParam145, &sjt_call125);
#line 62
            sjt_parent110 = &sjt_call125;
#line 62
            sjt_call131._refCount = 1;
#line 64
            sjt_call131.offset = 0;
#line 64
            sjt_call131.count = 1;
#line 64
            sjt_call131.data._refCount = 1;
#line 64
            sjt_call131.data.v = &sjg_string18;
#line 64
            sjf_array_char(&sjt_call131.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call131._isnullterminated = false;
#line 16
            sjf_string(&sjt_call131);
#line 64 "lib/sj-lib-json/value.sj"
            sjt_functionParam148 = &sjt_call131;
#line 64
            sjf_string_add(sjt_parent110, sjt_functionParam148, &sjt_call124);
#line 62
            sjt_parent109 = &sjt_call124;
#line 64
            sjt_functionParam150 = level * 2;
#line 64
            sjf_spaces(sjt_functionParam150, &sjt_call132);
#line 64
            sjt_functionParam149 = &sjt_call132;
#line 64
            sjf_string_add(sjt_parent109, sjt_functionParam149, &sjt_call123);
#line 62
            sjt_parent108 = &sjt_call123;
#line 62
            sjt_call133._refCount = 1;
#line 64
            sjt_call133.offset = 0;
#line 64
            sjt_call133.count = 1;
#line 64
            sjt_call133.data._refCount = 1;
#line 64
            sjt_call133.data.v = &sjg_string21;
#line 64
            sjf_array_char(&sjt_call133.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call133._isnullterminated = false;
#line 16
            sjf_string(&sjt_call133);
#line 64 "lib/sj-lib-json/value.sj"
            sjt_functionParam151 = &sjt_call133;
#line 64
            sjf_string_add_heap(sjt_parent108, sjt_functionParam151, _return);

            if (sjt_call123._refCount == 1) { sjf_string_destroy(&sjt_call123); }
;
            if (sjt_call124._refCount == 1) { sjf_string_destroy(&sjt_call124); }
;
            if (sjt_call125._refCount == 1) { sjf_string_destroy(&sjt_call125); }
;
            if (sjt_call126._refCount == 1) { sjf_string_destroy(&sjt_call126); }
;
            if (sjt_call127._refCount == 1) { sjf_string_destroy(&sjt_call127); }
;
            if (sjt_call128._refCount == 1) { sjf_array_string_destroy(&sjt_call128); }
;
            if (sjt_call129._refCount == 1) { sjf_lambda5_destroy(&sjt_call129); }
;
            if (sjt_call130._refCount == 1) { sjf_string_destroy(&sjt_call130); }
;
            if (sjt_call131._refCount == 1) { sjf_string_destroy(&sjt_call131); }
;
            if (sjt_call132._refCount == 1) { sjf_string_destroy(&sjt_call132); }
;
            if (sjt_call133._refCount == 1) { sjf_string_destroy(&sjt_call133); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue12 = 0;
                sjs_string sjt_call134 = { -1 };
                sjs_string sjt_call135 = { -1 };
                sjs_string sjt_call136 = { -1 };
                sjs_string sjt_call137 = { -1 };
                sjs_string sjt_call138 = { -1 };
                sjs_string sjt_call139 = { -1 };
                sjs_string sjt_call140 = { -1 };
                sjs_array_string sjt_call141 = { -1 };
                sjs_lambda4 sjt_call142 = { -1 };
                sjs_string sjt_call143 = { -1 };
                sjs_string sjt_call144 = { -1 };
                sjs_string sjt_call145 = { -1 };
                sjs_string sjt_call146 = { -1 };
                sjs_string* sjt_functionParam152 = 0;
                int32_t sjt_functionParam153;
                sjs_string* sjt_functionParam154 = 0;
                cb_string_value_string sjt_functionParam155;
                sjs_string* sjt_functionParam156 = 0;
                sjs_string* sjt_functionParam157 = 0;
                sjs_string* sjt_functionParam158 = 0;
                int32_t sjt_functionParam159;
                sjs_string* sjt_functionParam160 = 0;
                sjs_string* sjt_parent114 = 0;
                sjs_string* sjt_parent115 = 0;
                sjs_string* sjt_parent116 = 0;
                sjs_string* sjt_parent117 = 0;
                sjs_string* sjt_parent118 = 0;
                sjs_array_string* sjt_parent119 = 0;
                sjs_hash_string_value* sjt_parent120 = 0;

#line 66 "lib/sj-lib-json/value.sj"
                ifValue12 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 66
                sjt_call138._refCount = 1;
#line 67
                sjt_call138.offset = 0;
#line 67
                sjt_call138.count = 1;
#line 67
                sjt_call138.data._refCount = 1;
#line 67
                sjt_call138.data.v = &sjg_string16;
#line 67
                sjf_array_char(&sjt_call138.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call138._isnullterminated = false;
#line 16
                sjf_string(&sjt_call138);
#line 67 "lib/sj-lib-json/value.sj"
                sjt_parent118 = &sjt_call138;
#line 67
                sjt_functionParam153 = level * 2;
#line 67
                sjf_spaces(sjt_functionParam153, &sjt_call139);
#line 67
                sjt_functionParam152 = &sjt_call139;
#line 67
                sjf_string_add(sjt_parent118, sjt_functionParam152, &sjt_call137);
#line 67
                sjt_parent117 = &sjt_call137;
#line 170 "lib/sj-lib-common/hash.sj"
                sjt_parent120 = ifValue12;
#line 67 "lib/sj-lib-json/value.sj"
                sjs_lambda4* lambainit9;
#line 67
                sjt_call142._refCount = 1;
#line 57
                sjt_call142.lambdaparam4 = &level;
#line 57
                sjt_call142.lambdaparam5 = &level;
#line 57
                sjt_call142.lambdaparam6 = &level;
#line 57
                sjt_call142.lambdaparam7 = &level;
#line 57
                sjf_lambda4(&sjt_call142);
#line 67
                lambainit9 = &sjt_call142;
#line 67
                sjt_functionParam155._parent = (sjs_object*)lambainit9;
#line 67
                sjt_functionParam155._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda4_invoke;
#line 67
                sjf_hash_string_value_asarray_string(sjt_parent120, sjt_functionParam155, &sjt_call141);
#line 67
                sjt_parent119 = &sjt_call141;
#line 67
                sjt_call143._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
                sjt_call143.offset = 0;
#line 294
                sjt_call143.count = 2;
#line 294
                sjt_call143.data._refCount = 1;
#line 294
                sjt_call143.data.v = &sjg_string12;
#line 294
                sjf_array_char(&sjt_call143.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call143._isnullterminated = false;
#line 16
                sjf_string(&sjt_call143);
#line 294 "lib/sj-lib-common/array.sj"
                sjt_functionParam156 = &sjt_call143;
#line 294
                sjf_array_string_asstring(sjt_parent119, sjt_functionParam156, &sjt_call140);
#line 67 "lib/sj-lib-json/value.sj"
                sjt_functionParam154 = &sjt_call140;
#line 67
                sjf_string_add(sjt_parent117, sjt_functionParam154, &sjt_call136);
#line 67
                sjt_parent116 = &sjt_call136;
#line 67
                sjt_call144._refCount = 1;
#line 69
                sjt_call144.offset = 0;
#line 69
                sjt_call144.count = 1;
#line 69
                sjt_call144.data._refCount = 1;
#line 69
                sjt_call144.data.v = &sjg_string18;
#line 69
                sjf_array_char(&sjt_call144.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call144._isnullterminated = false;
#line 16
                sjf_string(&sjt_call144);
#line 69 "lib/sj-lib-json/value.sj"
                sjt_functionParam157 = &sjt_call144;
#line 69
                sjf_string_add(sjt_parent116, sjt_functionParam157, &sjt_call135);
#line 67
                sjt_parent115 = &sjt_call135;
#line 69
                sjt_functionParam159 = level * 2;
#line 69
                sjf_spaces(sjt_functionParam159, &sjt_call145);
#line 69
                sjt_functionParam158 = &sjt_call145;
#line 69
                sjf_string_add(sjt_parent115, sjt_functionParam158, &sjt_call134);
#line 67
                sjt_parent114 = &sjt_call134;
#line 67
                sjt_call146._refCount = 1;
#line 69
                sjt_call146.offset = 0;
#line 69
                sjt_call146.count = 1;
#line 69
                sjt_call146.data._refCount = 1;
#line 69
                sjt_call146.data.v = &sjg_string19;
#line 69
                sjf_array_char(&sjt_call146.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call146._isnullterminated = false;
#line 16
                sjf_string(&sjt_call146);
#line 69 "lib/sj-lib-json/value.sj"
                sjt_functionParam160 = &sjt_call146;
#line 69
                sjf_string_add_heap(sjt_parent114, sjt_functionParam160, _return);

                if (sjt_call134._refCount == 1) { sjf_string_destroy(&sjt_call134); }
;
                if (sjt_call135._refCount == 1) { sjf_string_destroy(&sjt_call135); }
;
                if (sjt_call136._refCount == 1) { sjf_string_destroy(&sjt_call136); }
;
                if (sjt_call137._refCount == 1) { sjf_string_destroy(&sjt_call137); }
;
                if (sjt_call138._refCount == 1) { sjf_string_destroy(&sjt_call138); }
;
                if (sjt_call139._refCount == 1) { sjf_string_destroy(&sjt_call139); }
;
                if (sjt_call140._refCount == 1) { sjf_string_destroy(&sjt_call140); }
;
                if (sjt_call141._refCount == 1) { sjf_array_string_destroy(&sjt_call141); }
;
                if (sjt_call142._refCount == 1) { sjf_lambda4_destroy(&sjt_call142); }
;
                if (sjt_call143._refCount == 1) { sjf_string_destroy(&sjt_call143); }
;
                if (sjt_call144._refCount == 1) { sjf_string_destroy(&sjt_call144); }
;
                if (sjt_call145._refCount == 1) { sjf_string_destroy(&sjt_call145); }
;
                if (sjt_call146._refCount == 1) { sjf_string_destroy(&sjt_call146); }
;
            } else {
                (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
                (*_return)->_refCount = 1;
#line 71 "lib/sj-lib-json/value.sj"
                (*_return)->offset = 0;
#line 71
                (*_return)->count = 0;
#line 71
                (*_return)->data._refCount = 1;
#line 71
                (*_return)->data.v = &sjg_string9;
#line 71
                sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
                (*_return)->_isnullterminated = false;
#line 16
                sjf_string_heap((*_return));
            }
        }
    }
}

void sjf_json_value_render(sjs_json_value* _parent, sjs_string* _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue1 = 0;

#line 40 "lib/sj-lib-json/value.sj"
        ifValue1 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 40
        _return->_refCount = 1;
#line 41
        sjf_string_copy(_return, ifValue1);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue2 = 0;
            sjs_string sjt_call23 = { -1 };
            sjs_string sjt_call24 = { -1 };
            sjs_string sjt_call25 = { -1 };
            sjs_array_string sjt_call30 = { -1 };
            sjs_lambda3 sjt_call33 = { -1 };
            sjs_string sjt_call34 = { -1 };
            sjs_string sjt_call35 = { -1 };
            sjs_string* sjt_functionParam56 = 0;
            cb_value_string sjt_functionParam67;
            sjs_string* sjt_functionParam68 = 0;
            sjs_string* sjt_functionParam69 = 0;
            sjs_string* sjt_parent32 = 0;
            sjs_string* sjt_parent33 = 0;
            sjs_array_string* sjt_parent40 = 0;
            sjs_array_value* sjt_parent41 = 0;

#line 43 "lib/sj-lib-json/value.sj"
            ifValue2 = (_parent->a._refCount != -1 ? &_parent->a : 0);
#line 43
            sjt_call24._refCount = 1;
#line 44
            sjt_call24.offset = 0;
#line 44
            sjt_call24.count = 2;
#line 44
            sjt_call24.data._refCount = 1;
#line 44
            sjt_call24.data.v = &sjg_string14;
#line 44
            sjf_array_char(&sjt_call24.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call24._isnullterminated = false;
#line 16
            sjf_string(&sjt_call24);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_parent33 = &sjt_call24;
#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent41 = ifValue2;
#line 44 "lib/sj-lib-json/value.sj"
            sjs_lambda3* lambainit4;
#line 44
            sjt_call33._refCount = 1;
#line 44
            sjf_lambda3(&sjt_call33);
#line 44
            lambainit4 = &sjt_call33;
#line 44
            sjt_functionParam67._parent = (sjs_object*)lambainit4;
#line 44
            sjt_functionParam67._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda3_invoke;
#line 44
            sjf_array_value_map_string(sjt_parent41, sjt_functionParam67, &sjt_call30);
#line 44
            sjt_parent40 = &sjt_call30;
#line 44
            sjt_call34._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_call34.offset = 0;
#line 294
            sjt_call34.count = 2;
#line 294
            sjt_call34.data._refCount = 1;
#line 294
            sjt_call34.data.v = &sjg_string12;
#line 294
            sjf_array_char(&sjt_call34.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call34._isnullterminated = false;
#line 16
            sjf_string(&sjt_call34);
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam68 = &sjt_call34;
#line 294
            sjf_array_string_asstring(sjt_parent40, sjt_functionParam68, &sjt_call25);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_functionParam56 = &sjt_call25;
#line 44
            sjf_string_add(sjt_parent33, sjt_functionParam56, &sjt_call23);
#line 44
            sjt_parent32 = &sjt_call23;
#line 44
            sjt_call35._refCount = 1;
#line 44
            sjt_call35.offset = 0;
#line 44
            sjt_call35.count = 2;
#line 44
            sjt_call35.data._refCount = 1;
#line 44
            sjt_call35.data.v = &sjg_string15;
#line 44
            sjf_array_char(&sjt_call35.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call35._isnullterminated = false;
#line 16
            sjf_string(&sjt_call35);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_functionParam69 = &sjt_call35;
#line 44
            sjf_string_add(sjt_parent32, sjt_functionParam69, _return);

            if (sjt_call23._refCount == 1) { sjf_string_destroy(&sjt_call23); }
;
            if (sjt_call24._refCount == 1) { sjf_string_destroy(&sjt_call24); }
;
            if (sjt_call25._refCount == 1) { sjf_string_destroy(&sjt_call25); }
;
            if (sjt_call30._refCount == 1) { sjf_array_string_destroy(&sjt_call30); }
;
            if (sjt_call33._refCount == 1) { sjf_lambda3_destroy(&sjt_call33); }
;
            if (sjt_call34._refCount == 1) { sjf_string_destroy(&sjt_call34); }
;
            if (sjt_call35._refCount == 1) { sjf_string_destroy(&sjt_call35); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue3 = 0;
                sjs_string sjt_call36 = { -1 };
                sjs_string sjt_call37 = { -1 };
                sjs_string sjt_call38 = { -1 };
                sjs_array_string sjt_call39 = { -1 };
                sjs_lambda2 sjt_call43 = { -1 };
                sjs_string sjt_call54 = { -1 };
                sjs_string sjt_call55 = { -1 };
                sjs_string* sjt_functionParam70 = 0;
                cb_string_value_string sjt_functionParam83;
                sjs_string* sjt_functionParam90 = 0;
                sjs_string* sjt_functionParam91 = 0;
                sjs_string* sjt_parent44 = 0;
                sjs_string* sjt_parent45 = 0;
                sjs_array_string* sjt_parent46 = 0;
                sjs_hash_string_value* sjt_parent55 = 0;

#line 46 "lib/sj-lib-json/value.sj"
                ifValue3 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 46
                sjt_call37._refCount = 1;
#line 47
                sjt_call37.offset = 0;
#line 47
                sjt_call37.count = 2;
#line 47
                sjt_call37.data._refCount = 1;
#line 47
                sjt_call37.data.v = &sjg_string10;
#line 47
                sjf_array_char(&sjt_call37.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call37._isnullterminated = false;
#line 16
                sjf_string(&sjt_call37);
#line 47 "lib/sj-lib-json/value.sj"
                sjt_parent45 = &sjt_call37;
#line 170 "lib/sj-lib-common/hash.sj"
                sjt_parent55 = ifValue3;
#line 47 "lib/sj-lib-json/value.sj"
                sjs_lambda2* lambainit3;
#line 47
                sjt_call43._refCount = 1;
#line 47
                sjf_lambda2(&sjt_call43);
#line 47
                lambainit3 = &sjt_call43;
#line 47
                sjt_functionParam83._parent = (sjs_object*)lambainit3;
#line 47
                sjt_functionParam83._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda2_invoke;
#line 47
                sjf_hash_string_value_asarray_string(sjt_parent55, sjt_functionParam83, &sjt_call39);
#line 47
                sjt_parent46 = &sjt_call39;
#line 47
                sjt_call54._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
                sjt_call54.offset = 0;
#line 294
                sjt_call54.count = 2;
#line 294
                sjt_call54.data._refCount = 1;
#line 294
                sjt_call54.data.v = &sjg_string12;
#line 294
                sjf_array_char(&sjt_call54.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call54._isnullterminated = false;
#line 16
                sjf_string(&sjt_call54);
#line 294 "lib/sj-lib-common/array.sj"
                sjt_functionParam90 = &sjt_call54;
#line 294
                sjf_array_string_asstring(sjt_parent46, sjt_functionParam90, &sjt_call38);
#line 47 "lib/sj-lib-json/value.sj"
                sjt_functionParam70 = &sjt_call38;
#line 47
                sjf_string_add(sjt_parent45, sjt_functionParam70, &sjt_call36);
#line 47
                sjt_parent44 = &sjt_call36;
#line 47
                sjt_call55._refCount = 1;
#line 49
                sjt_call55.offset = 0;
#line 49
                sjt_call55.count = 2;
#line 49
                sjt_call55.data._refCount = 1;
#line 49
                sjt_call55.data.v = &sjg_string13;
#line 49
                sjf_array_char(&sjt_call55.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call55._isnullterminated = false;
#line 16
                sjf_string(&sjt_call55);
#line 49 "lib/sj-lib-json/value.sj"
                sjt_functionParam91 = &sjt_call55;
#line 49
                sjf_string_add(sjt_parent44, sjt_functionParam91, _return);

                if (sjt_call36._refCount == 1) { sjf_string_destroy(&sjt_call36); }
;
                if (sjt_call37._refCount == 1) { sjf_string_destroy(&sjt_call37); }
;
                if (sjt_call38._refCount == 1) { sjf_string_destroy(&sjt_call38); }
;
                if (sjt_call39._refCount == 1) { sjf_array_string_destroy(&sjt_call39); }
;
                if (sjt_call43._refCount == 1) { sjf_lambda2_destroy(&sjt_call43); }
;
                if (sjt_call54._refCount == 1) { sjf_string_destroy(&sjt_call54); }
;
                if (sjt_call55._refCount == 1) { sjf_string_destroy(&sjt_call55); }
;
            } else {
                _return->_refCount = 1;
#line 51 "lib/sj-lib-json/value.sj"
                _return->offset = 0;
#line 51
                _return->count = 0;
#line 51
                _return->data._refCount = 1;
#line 51
                _return->data.v = &sjg_string9;
#line 51
                sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
                _return->_isnullterminated = false;
#line 16
                sjf_string(_return);
            }
        }
    }
}

void sjf_json_value_render_heap(sjs_json_value* _parent, sjs_string** _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue4 = 0;

#line 40 "lib/sj-lib-json/value.sj"
        ifValue4 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 40
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 40
        (*_return)->_refCount = 1;
#line 41
        sjf_string_copy((*_return), ifValue4);
    } else {
        if (((_parent->a._refCount != -1 ? &_parent->a : 0) != 0)) {
            sjs_array_value* ifValue5 = 0;
            sjs_string sjt_call56 = { -1 };
            sjs_string sjt_call57 = { -1 };
            sjs_string sjt_call58 = { -1 };
            sjs_array_string sjt_call59 = { -1 };
            sjs_lambda3 sjt_call60 = { -1 };
            sjs_string sjt_call61 = { -1 };
            sjs_string sjt_call62 = { -1 };
            sjs_string* sjt_functionParam92 = 0;
            cb_value_string sjt_functionParam93;
            sjs_string* sjt_functionParam94 = 0;
            sjs_string* sjt_functionParam95 = 0;
            sjs_string* sjt_parent64 = 0;
            sjs_string* sjt_parent65 = 0;
            sjs_array_string* sjt_parent66 = 0;
            sjs_array_value* sjt_parent67 = 0;

#line 43 "lib/sj-lib-json/value.sj"
            ifValue5 = (_parent->a._refCount != -1 ? &_parent->a : 0);
#line 43
            sjt_call57._refCount = 1;
#line 44
            sjt_call57.offset = 0;
#line 44
            sjt_call57.count = 2;
#line 44
            sjt_call57.data._refCount = 1;
#line 44
            sjt_call57.data.v = &sjg_string14;
#line 44
            sjf_array_char(&sjt_call57.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call57._isnullterminated = false;
#line 16
            sjf_string(&sjt_call57);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_parent65 = &sjt_call57;
#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent67 = ifValue5;
#line 44 "lib/sj-lib-json/value.sj"
            sjs_lambda3* lambainit6;
#line 44
            sjt_call60._refCount = 1;
#line 44
            sjf_lambda3(&sjt_call60);
#line 44
            lambainit6 = &sjt_call60;
#line 44
            sjt_functionParam93._parent = (sjs_object*)lambainit6;
#line 44
            sjt_functionParam93._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_string*))sjf_lambda3_invoke;
#line 44
            sjf_array_value_map_string(sjt_parent67, sjt_functionParam93, &sjt_call59);
#line 44
            sjt_parent66 = &sjt_call59;
#line 44
            sjt_call61._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
            sjt_call61.offset = 0;
#line 294
            sjt_call61.count = 2;
#line 294
            sjt_call61.data._refCount = 1;
#line 294
            sjt_call61.data.v = &sjg_string12;
#line 294
            sjf_array_char(&sjt_call61.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call61._isnullterminated = false;
#line 16
            sjf_string(&sjt_call61);
#line 294 "lib/sj-lib-common/array.sj"
            sjt_functionParam94 = &sjt_call61;
#line 294
            sjf_array_string_asstring(sjt_parent66, sjt_functionParam94, &sjt_call58);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_functionParam92 = &sjt_call58;
#line 44
            sjf_string_add(sjt_parent65, sjt_functionParam92, &sjt_call56);
#line 44
            sjt_parent64 = &sjt_call56;
#line 44
            sjt_call62._refCount = 1;
#line 44
            sjt_call62.offset = 0;
#line 44
            sjt_call62.count = 2;
#line 44
            sjt_call62.data._refCount = 1;
#line 44
            sjt_call62.data.v = &sjg_string15;
#line 44
            sjf_array_char(&sjt_call62.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call62._isnullterminated = false;
#line 16
            sjf_string(&sjt_call62);
#line 44 "lib/sj-lib-json/value.sj"
            sjt_functionParam95 = &sjt_call62;
#line 44
            sjf_string_add_heap(sjt_parent64, sjt_functionParam95, _return);

            if (sjt_call56._refCount == 1) { sjf_string_destroy(&sjt_call56); }
;
            if (sjt_call57._refCount == 1) { sjf_string_destroy(&sjt_call57); }
;
            if (sjt_call58._refCount == 1) { sjf_string_destroy(&sjt_call58); }
;
            if (sjt_call59._refCount == 1) { sjf_array_string_destroy(&sjt_call59); }
;
            if (sjt_call60._refCount == 1) { sjf_lambda3_destroy(&sjt_call60); }
;
            if (sjt_call61._refCount == 1) { sjf_string_destroy(&sjt_call61); }
;
            if (sjt_call62._refCount == 1) { sjf_string_destroy(&sjt_call62); }
;
        } else {
            if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
                sjs_hash_string_value* ifValue6 = 0;
                sjs_string sjt_call63 = { -1 };
                sjs_string sjt_call64 = { -1 };
                sjs_string sjt_call65 = { -1 };
                sjs_array_string sjt_call66 = { -1 };
                sjs_lambda2 sjt_call67 = { -1 };
                sjs_string sjt_call68 = { -1 };
                sjs_string sjt_call69 = { -1 };
                sjs_string* sjt_functionParam96 = 0;
                cb_string_value_string sjt_functionParam97;
                sjs_string* sjt_functionParam98 = 0;
                sjs_string* sjt_functionParam99 = 0;
                sjs_string* sjt_parent68 = 0;
                sjs_string* sjt_parent69 = 0;
                sjs_array_string* sjt_parent70 = 0;
                sjs_hash_string_value* sjt_parent71 = 0;

#line 46 "lib/sj-lib-json/value.sj"
                ifValue6 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 46
                sjt_call64._refCount = 1;
#line 47
                sjt_call64.offset = 0;
#line 47
                sjt_call64.count = 2;
#line 47
                sjt_call64.data._refCount = 1;
#line 47
                sjt_call64.data.v = &sjg_string10;
#line 47
                sjf_array_char(&sjt_call64.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call64._isnullterminated = false;
#line 16
                sjf_string(&sjt_call64);
#line 47 "lib/sj-lib-json/value.sj"
                sjt_parent69 = &sjt_call64;
#line 170 "lib/sj-lib-common/hash.sj"
                sjt_parent71 = ifValue6;
#line 47 "lib/sj-lib-json/value.sj"
                sjs_lambda2* lambainit5;
#line 47
                sjt_call67._refCount = 1;
#line 47
                sjf_lambda2(&sjt_call67);
#line 47
                lambainit5 = &sjt_call67;
#line 47
                sjt_functionParam97._parent = (sjs_object*)lambainit5;
#line 47
                sjt_functionParam97._cb = (void(*)(sjs_object*,sjs_string*,sjs_json_value*, sjs_string*))sjf_lambda2_invoke;
#line 47
                sjf_hash_string_value_asarray_string(sjt_parent71, sjt_functionParam97, &sjt_call66);
#line 47
                sjt_parent70 = &sjt_call66;
#line 47
                sjt_call68._refCount = 1;
#line 294 "lib/sj-lib-common/array.sj"
                sjt_call68.offset = 0;
#line 294
                sjt_call68.count = 2;
#line 294
                sjt_call68.data._refCount = 1;
#line 294
                sjt_call68.data.v = &sjg_string12;
#line 294
                sjf_array_char(&sjt_call68.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call68._isnullterminated = false;
#line 16
                sjf_string(&sjt_call68);
#line 294 "lib/sj-lib-common/array.sj"
                sjt_functionParam98 = &sjt_call68;
#line 294
                sjf_array_string_asstring(sjt_parent70, sjt_functionParam98, &sjt_call65);
#line 47 "lib/sj-lib-json/value.sj"
                sjt_functionParam96 = &sjt_call65;
#line 47
                sjf_string_add(sjt_parent69, sjt_functionParam96, &sjt_call63);
#line 47
                sjt_parent68 = &sjt_call63;
#line 47
                sjt_call69._refCount = 1;
#line 49
                sjt_call69.offset = 0;
#line 49
                sjt_call69.count = 2;
#line 49
                sjt_call69.data._refCount = 1;
#line 49
                sjt_call69.data.v = &sjg_string13;
#line 49
                sjf_array_char(&sjt_call69.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call69._isnullterminated = false;
#line 16
                sjf_string(&sjt_call69);
#line 49 "lib/sj-lib-json/value.sj"
                sjt_functionParam99 = &sjt_call69;
#line 49
                sjf_string_add_heap(sjt_parent68, sjt_functionParam99, _return);

                if (sjt_call63._refCount == 1) { sjf_string_destroy(&sjt_call63); }
;
                if (sjt_call64._refCount == 1) { sjf_string_destroy(&sjt_call64); }
;
                if (sjt_call65._refCount == 1) { sjf_string_destroy(&sjt_call65); }
;
                if (sjt_call66._refCount == 1) { sjf_array_string_destroy(&sjt_call66); }
;
                if (sjt_call67._refCount == 1) { sjf_lambda2_destroy(&sjt_call67); }
;
                if (sjt_call68._refCount == 1) { sjf_string_destroy(&sjt_call68); }
;
                if (sjt_call69._refCount == 1) { sjf_string_destroy(&sjt_call69); }
;
            } else {
                (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
                (*_return)->_refCount = 1;
#line 51 "lib/sj-lib-json/value.sj"
                (*_return)->offset = 0;
#line 51
                (*_return)->count = 0;
#line 51
                (*_return)->data._refCount = 1;
#line 51
                (*_return)->data.v = &sjg_string9;
#line 51
                sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
                (*_return)->_isnullterminated = false;
#line 16
                sjf_string_heap((*_return));
            }
        }
    }
}

void sjf_lambda1(sjs_lambda1* _this) {
}

void sjf_lambda1_copy(sjs_lambda1* _this, sjs_lambda1* _from) {
#line 172 "lib/sj-lib-common/hash.sj"
    _this->lambdaparam1 = _from->lambdaparam1;
#line 172
    _this->lambdaparam2 = _from->lambdaparam2;
#line 172
    _this->lambdaparam3 = _from->lambdaparam3;
}

void sjf_lambda1_destroy(sjs_lambda1* _this) {
}

void sjf_lambda1_heap(sjs_lambda1* _this) {
}

void sjf_lambda1_invoke(sjs_lambda1* _parent, sjs_string* _1, sjs_json_value* _2) {
    sjs_string sjt_call41 = { -1 };
    sjs_string* sjt_functionParam79 = 0;
    sjs_string* sjt_functionParam80 = 0;
    sjs_json_value* sjt_functionParam81 = 0;
    sjs_list_string* sjt_parent54 = 0;

#line 44 "lib/sj-lib-common/list.sj"
    sjt_parent54 = _parent->lambdaparam1;
#line 172 "lib/sj-lib-common/hash.sj"
    sjt_functionParam80 = _1;
#line 172
    sjt_functionParam81 = _2;
#line 172
    _parent->lambdaparam2._cb(_parent->lambdaparam2._parent, sjt_functionParam80, sjt_functionParam81, &sjt_call41);
#line 173
    sjt_functionParam79 = &sjt_call41;
#line 173
    sjf_list_string_add(sjt_parent54, sjt_functionParam79);

    if (sjt_call41._refCount == 1) { sjf_string_destroy(&sjt_call41); }
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
    sjs_string sjt_call44 = { -1 };
    sjs_string sjt_call45 = { -1 };
    sjs_string sjt_call46 = { -1 };
    sjs_string sjt_call47 = { -1 };
    sjs_string sjt_call48 = { -1 };
    sjs_string* sjt_functionParam84 = 0;
    sjs_string* sjt_functionParam85 = 0;
    sjs_string* sjt_functionParam86 = 0;
    sjs_string* sjt_parent56 = 0;
    sjs_string* sjt_parent57 = 0;
    sjs_string* sjt_parent58 = 0;
    sjs_json_value* sjt_parent59 = 0;

    sjt_call46._refCount = 1;
#line 48 "lib/sj-lib-json/value.sj"
    sjt_call46.offset = 0;
#line 48
    sjt_call46.count = 1;
#line 48
    sjt_call46.data._refCount = 1;
#line 48
    sjt_call46.data.v = &sjg_string5;
#line 48
    sjf_array_char(&sjt_call46.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call46._isnullterminated = false;
#line 16
    sjf_string(&sjt_call46);
#line 48 "lib/sj-lib-json/value.sj"
    sjt_parent58 = &sjt_call46;
#line 47
    sjt_functionParam84 = _1;
#line 47
    sjf_string_add(sjt_parent58, sjt_functionParam84, &sjt_call45);
#line 48
    sjt_parent57 = &sjt_call45;
#line 48
    sjt_call47._refCount = 1;
#line 48
    sjt_call47.offset = 0;
#line 48
    sjt_call47.count = 4;
#line 48
    sjt_call47.data._refCount = 1;
#line 48
    sjt_call47.data.v = &sjg_string11;
#line 48
    sjf_array_char(&sjt_call47.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call47._isnullterminated = false;
#line 16
    sjf_string(&sjt_call47);
#line 48 "lib/sj-lib-json/value.sj"
    sjt_functionParam85 = &sjt_call47;
#line 48
    sjf_string_add(sjt_parent57, sjt_functionParam85, &sjt_call44);
#line 48
    sjt_parent56 = &sjt_call44;
#line 47
    sjt_parent59 = _2;
#line 47
    sjf_json_value_render(sjt_parent59, &sjt_call48);
#line 48
    sjt_functionParam86 = &sjt_call48;
#line 48
    sjf_string_add(sjt_parent56, sjt_functionParam86, _return);

    if (sjt_call44._refCount == 1) { sjf_string_destroy(&sjt_call44); }
;
    if (sjt_call45._refCount == 1) { sjf_string_destroy(&sjt_call45); }
;
    if (sjt_call46._refCount == 1) { sjf_string_destroy(&sjt_call46); }
;
    if (sjt_call47._refCount == 1) { sjf_string_destroy(&sjt_call47); }
;
    if (sjt_call48._refCount == 1) { sjf_string_destroy(&sjt_call48); }
;
}

void sjf_lambda2_invoke_heap(sjs_lambda2* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string** _return) {
    sjs_string sjt_call49 = { -1 };
    sjs_string sjt_call50 = { -1 };
    sjs_string sjt_call51 = { -1 };
    sjs_string sjt_call52 = { -1 };
    sjs_string sjt_call53 = { -1 };
    sjs_string* sjt_functionParam87 = 0;
    sjs_string* sjt_functionParam88 = 0;
    sjs_string* sjt_functionParam89 = 0;
    sjs_string* sjt_parent60 = 0;
    sjs_string* sjt_parent61 = 0;
    sjs_string* sjt_parent62 = 0;
    sjs_json_value* sjt_parent63 = 0;

    sjt_call51._refCount = 1;
#line 48 "lib/sj-lib-json/value.sj"
    sjt_call51.offset = 0;
#line 48
    sjt_call51.count = 1;
#line 48
    sjt_call51.data._refCount = 1;
#line 48
    sjt_call51.data.v = &sjg_string5;
#line 48
    sjf_array_char(&sjt_call51.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call51._isnullterminated = false;
#line 16
    sjf_string(&sjt_call51);
#line 48 "lib/sj-lib-json/value.sj"
    sjt_parent62 = &sjt_call51;
#line 47
    sjt_functionParam87 = _1;
#line 47
    sjf_string_add(sjt_parent62, sjt_functionParam87, &sjt_call50);
#line 48
    sjt_parent61 = &sjt_call50;
#line 48
    sjt_call52._refCount = 1;
#line 48
    sjt_call52.offset = 0;
#line 48
    sjt_call52.count = 4;
#line 48
    sjt_call52.data._refCount = 1;
#line 48
    sjt_call52.data.v = &sjg_string11;
#line 48
    sjf_array_char(&sjt_call52.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call52._isnullterminated = false;
#line 16
    sjf_string(&sjt_call52);
#line 48 "lib/sj-lib-json/value.sj"
    sjt_functionParam88 = &sjt_call52;
#line 48
    sjf_string_add(sjt_parent61, sjt_functionParam88, &sjt_call49);
#line 48
    sjt_parent60 = &sjt_call49;
#line 47
    sjt_parent63 = _2;
#line 47
    sjf_json_value_render(sjt_parent63, &sjt_call53);
#line 48
    sjt_functionParam89 = &sjt_call53;
#line 48
    sjf_string_add_heap(sjt_parent60, sjt_functionParam89, _return);

    if (sjt_call49._refCount == 1) { sjf_string_destroy(&sjt_call49); }
;
    if (sjt_call50._refCount == 1) { sjf_string_destroy(&sjt_call50); }
;
    if (sjt_call51._refCount == 1) { sjf_string_destroy(&sjt_call51); }
;
    if (sjt_call52._refCount == 1) { sjf_string_destroy(&sjt_call52); }
;
    if (sjt_call53._refCount == 1) { sjf_string_destroy(&sjt_call53); }
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
    sjs_json_value* sjt_parent42 = 0;

#line 44 "lib/sj-lib-json/value.sj"
    sjt_parent42 = _1;
#line 44
    sjf_json_value_render(sjt_parent42, _return);
}

void sjf_lambda3_invoke_heap(sjs_lambda3* _parent, sjs_json_value* _1, sjs_string** _return) {
    sjs_json_value* sjt_parent43 = 0;

#line 44 "lib/sj-lib-json/value.sj"
    sjt_parent43 = _1;
#line 44
    sjf_json_value_render_heap(sjt_parent43, _return);
}

void sjf_lambda4(sjs_lambda4* _this) {
}

void sjf_lambda4_copy(sjs_lambda4* _this, sjs_lambda4* _from) {
#line 67 "lib/sj-lib-json/value.sj"
    _this->lambdaparam4 = _from->lambdaparam4;
#line 67
    _this->lambdaparam5 = _from->lambdaparam5;
#line 67
    _this->lambdaparam6 = _from->lambdaparam6;
#line 67
    _this->lambdaparam7 = _from->lambdaparam7;
}

void sjf_lambda4_destroy(sjs_lambda4* _this) {
}

void sjf_lambda4_heap(sjs_lambda4* _this) {
}

void sjf_lambda4_invoke(sjs_lambda4* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string* _return) {
    sjs_string sjt_call101 = { -1 };
    sjs_string sjt_call102 = { -1 };
    sjs_string sjt_call103 = { -1 };
    sjs_string sjt_call104 = { -1 };
    sjs_string sjt_call105 = { -1 };
    sjs_string sjt_call106 = { -1 };
    sjs_string sjt_call107 = { -1 };
    sjs_string sjt_call108 = { -1 };
    sjs_string sjt_call109 = { -1 };
    sjs_string* sjt_functionParam126 = 0;
    int32_t sjt_functionParam127;
    sjs_string* sjt_functionParam128 = 0;
    sjs_string* sjt_functionParam129 = 0;
    sjs_string* sjt_functionParam130 = 0;
    sjs_string* sjt_functionParam131 = 0;
    int32_t sjt_functionParam132;
    sjs_string* sjt_parent100 = 0;
    sjs_json_value* sjt_parent101 = 0;
    sjs_string* sjt_parent96 = 0;
    sjs_string* sjt_parent97 = 0;
    sjs_string* sjt_parent98 = 0;
    sjs_string* sjt_parent99 = 0;

    sjt_call105._refCount = 1;
#line 68 "lib/sj-lib-json/value.sj"
    sjt_call105.offset = 0;
#line 68
    sjt_call105.count = 1;
#line 68
    sjt_call105.data._refCount = 1;
#line 68
    sjt_call105.data.v = &sjg_string18;
#line 68
    sjf_array_char(&sjt_call105.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call105._isnullterminated = false;
#line 16
    sjf_string(&sjt_call105);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_parent100 = &sjt_call105;
#line 68
    sjt_functionParam127 = (*_parent->lambdaparam4 + 1) * 2;
#line 68
    sjf_spaces(sjt_functionParam127, &sjt_call106);
#line 68
    sjt_functionParam126 = &sjt_call106;
#line 68
    sjf_string_add(sjt_parent100, sjt_functionParam126, &sjt_call104);
#line 68
    sjt_parent99 = &sjt_call104;
#line 68
    sjt_call107._refCount = 1;
#line 68
    sjt_call107.offset = 0;
#line 68
    sjt_call107.count = 1;
#line 68
    sjt_call107.data._refCount = 1;
#line 68
    sjt_call107.data.v = &sjg_string5;
#line 68
    sjf_array_char(&sjt_call107.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call107._isnullterminated = false;
#line 16
    sjf_string(&sjt_call107);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_functionParam128 = &sjt_call107;
#line 68
    sjf_string_add(sjt_parent99, sjt_functionParam128, &sjt_call103);
#line 68
    sjt_parent98 = &sjt_call103;
#line 67
    sjt_functionParam129 = _1;
#line 67
    sjf_string_add(sjt_parent98, sjt_functionParam129, &sjt_call102);
#line 68
    sjt_parent97 = &sjt_call102;
#line 68
    sjt_call108._refCount = 1;
#line 68
    sjt_call108.offset = 0;
#line 68
    sjt_call108.count = 4;
#line 68
    sjt_call108.data._refCount = 1;
#line 68
    sjt_call108.data.v = &sjg_string11;
#line 68
    sjf_array_char(&sjt_call108.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call108._isnullterminated = false;
#line 16
    sjf_string(&sjt_call108);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_functionParam130 = &sjt_call108;
#line 68
    sjf_string_add(sjt_parent97, sjt_functionParam130, &sjt_call101);
#line 68
    sjt_parent96 = &sjt_call101;
#line 67
    sjt_parent101 = _2;
#line 68
    sjt_functionParam132 = *_parent->lambdaparam5 + 1;
#line 68
    sjf_json_value_pretty(sjt_parent101, sjt_functionParam132, &sjt_call109);
#line 68
    sjt_functionParam131 = &sjt_call109;
#line 68
    sjf_string_add(sjt_parent96, sjt_functionParam131, _return);

    if (sjt_call101._refCount == 1) { sjf_string_destroy(&sjt_call101); }
;
    if (sjt_call102._refCount == 1) { sjf_string_destroy(&sjt_call102); }
;
    if (sjt_call103._refCount == 1) { sjf_string_destroy(&sjt_call103); }
;
    if (sjt_call104._refCount == 1) { sjf_string_destroy(&sjt_call104); }
;
    if (sjt_call105._refCount == 1) { sjf_string_destroy(&sjt_call105); }
;
    if (sjt_call106._refCount == 1) { sjf_string_destroy(&sjt_call106); }
;
    if (sjt_call107._refCount == 1) { sjf_string_destroy(&sjt_call107); }
;
    if (sjt_call108._refCount == 1) { sjf_string_destroy(&sjt_call108); }
;
    if (sjt_call109._refCount == 1) { sjf_string_destroy(&sjt_call109); }
;
}

void sjf_lambda4_invoke_heap(sjs_lambda4* _parent, sjs_string* _1, sjs_json_value* _2, sjs_string** _return) {
    sjs_string sjt_call110 = { -1 };
    sjs_string sjt_call111 = { -1 };
    sjs_string sjt_call112 = { -1 };
    sjs_string sjt_call113 = { -1 };
    sjs_string sjt_call114 = { -1 };
    sjs_string sjt_call115 = { -1 };
    sjs_string sjt_call116 = { -1 };
    sjs_string sjt_call117 = { -1 };
    sjs_string sjt_call118 = { -1 };
    sjs_string* sjt_functionParam133 = 0;
    int32_t sjt_functionParam134;
    sjs_string* sjt_functionParam135 = 0;
    sjs_string* sjt_functionParam136 = 0;
    sjs_string* sjt_functionParam137 = 0;
    sjs_string* sjt_functionParam138 = 0;
    int32_t sjt_functionParam139;
    sjs_string* sjt_parent102 = 0;
    sjs_string* sjt_parent103 = 0;
    sjs_string* sjt_parent104 = 0;
    sjs_string* sjt_parent105 = 0;
    sjs_string* sjt_parent106 = 0;
    sjs_json_value* sjt_parent107 = 0;

    sjt_call114._refCount = 1;
#line 68 "lib/sj-lib-json/value.sj"
    sjt_call114.offset = 0;
#line 68
    sjt_call114.count = 1;
#line 68
    sjt_call114.data._refCount = 1;
#line 68
    sjt_call114.data.v = &sjg_string18;
#line 68
    sjf_array_char(&sjt_call114.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call114._isnullterminated = false;
#line 16
    sjf_string(&sjt_call114);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_parent106 = &sjt_call114;
#line 68
    sjt_functionParam134 = (*_parent->lambdaparam6 + 1) * 2;
#line 68
    sjf_spaces(sjt_functionParam134, &sjt_call115);
#line 68
    sjt_functionParam133 = &sjt_call115;
#line 68
    sjf_string_add(sjt_parent106, sjt_functionParam133, &sjt_call113);
#line 68
    sjt_parent105 = &sjt_call113;
#line 68
    sjt_call116._refCount = 1;
#line 68
    sjt_call116.offset = 0;
#line 68
    sjt_call116.count = 1;
#line 68
    sjt_call116.data._refCount = 1;
#line 68
    sjt_call116.data.v = &sjg_string5;
#line 68
    sjf_array_char(&sjt_call116.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call116._isnullterminated = false;
#line 16
    sjf_string(&sjt_call116);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_functionParam135 = &sjt_call116;
#line 68
    sjf_string_add(sjt_parent105, sjt_functionParam135, &sjt_call112);
#line 68
    sjt_parent104 = &sjt_call112;
#line 67
    sjt_functionParam136 = _1;
#line 67
    sjf_string_add(sjt_parent104, sjt_functionParam136, &sjt_call111);
#line 68
    sjt_parent103 = &sjt_call111;
#line 68
    sjt_call117._refCount = 1;
#line 68
    sjt_call117.offset = 0;
#line 68
    sjt_call117.count = 4;
#line 68
    sjt_call117.data._refCount = 1;
#line 68
    sjt_call117.data.v = &sjg_string11;
#line 68
    sjf_array_char(&sjt_call117.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call117._isnullterminated = false;
#line 16
    sjf_string(&sjt_call117);
#line 68 "lib/sj-lib-json/value.sj"
    sjt_functionParam137 = &sjt_call117;
#line 68
    sjf_string_add(sjt_parent103, sjt_functionParam137, &sjt_call110);
#line 68
    sjt_parent102 = &sjt_call110;
#line 67
    sjt_parent107 = _2;
#line 68
    sjt_functionParam139 = *_parent->lambdaparam7 + 1;
#line 68
    sjf_json_value_pretty(sjt_parent107, sjt_functionParam139, &sjt_call118);
#line 68
    sjt_functionParam138 = &sjt_call118;
#line 68
    sjf_string_add_heap(sjt_parent102, sjt_functionParam138, _return);

    if (sjt_call110._refCount == 1) { sjf_string_destroy(&sjt_call110); }
;
    if (sjt_call111._refCount == 1) { sjf_string_destroy(&sjt_call111); }
;
    if (sjt_call112._refCount == 1) { sjf_string_destroy(&sjt_call112); }
;
    if (sjt_call113._refCount == 1) { sjf_string_destroy(&sjt_call113); }
;
    if (sjt_call114._refCount == 1) { sjf_string_destroy(&sjt_call114); }
;
    if (sjt_call115._refCount == 1) { sjf_string_destroy(&sjt_call115); }
;
    if (sjt_call116._refCount == 1) { sjf_string_destroy(&sjt_call116); }
;
    if (sjt_call117._refCount == 1) { sjf_string_destroy(&sjt_call117); }
;
    if (sjt_call118._refCount == 1) { sjf_string_destroy(&sjt_call118); }
;
}

void sjf_lambda5(sjs_lambda5* _this) {
}

void sjf_lambda5_copy(sjs_lambda5* _this, sjs_lambda5* _from) {
#line 62 "lib/sj-lib-json/value.sj"
    _this->lambdaparam8 = _from->lambdaparam8;
#line 62
    _this->lambdaparam9 = _from->lambdaparam9;
#line 62
    _this->lambdaparam10 = _from->lambdaparam10;
#line 62
    _this->lambdaparam11 = _from->lambdaparam11;
}

void sjf_lambda5_destroy(sjs_lambda5* _this) {
}

void sjf_lambda5_heap(sjs_lambda5* _this) {
}

void sjf_lambda5_invoke(sjs_lambda5* _parent, sjs_json_value* _1, sjs_string* _return) {
    sjs_string sjt_call78 = { -1 };
    sjs_string sjt_call79 = { -1 };
    sjs_string sjt_call80 = { -1 };
    sjs_string sjt_call83 = { -1 };
    sjs_string* sjt_functionParam103 = 0;
    int32_t sjt_functionParam110;
    sjs_string* sjt_functionParam111 = 0;
    int32_t sjt_functionParam112;
    sjs_string* sjt_parent79 = 0;
    sjs_string* sjt_parent80 = 0;
    sjs_json_value* sjt_parent85 = 0;

    sjt_call79._refCount = 1;
#line 63 "lib/sj-lib-json/value.sj"
    sjt_call79.offset = 0;
#line 63
    sjt_call79.count = 1;
#line 63
    sjt_call79.data._refCount = 1;
#line 63
    sjt_call79.data.v = &sjg_string18;
#line 63
    sjf_array_char(&sjt_call79.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call79._isnullterminated = false;
#line 16
    sjf_string(&sjt_call79);
#line 63 "lib/sj-lib-json/value.sj"
    sjt_parent80 = &sjt_call79;
#line 63
    sjt_functionParam110 = (*_parent->lambdaparam8 + 1) * 2;
#line 63
    sjf_spaces(sjt_functionParam110, &sjt_call80);
#line 63
    sjt_functionParam103 = &sjt_call80;
#line 63
    sjf_string_add(sjt_parent80, sjt_functionParam103, &sjt_call78);
#line 63
    sjt_parent79 = &sjt_call78;
#line 62
    sjt_parent85 = _1;
#line 63
    sjt_functionParam112 = *_parent->lambdaparam9 + 1;
#line 63
    sjf_json_value_pretty(sjt_parent85, sjt_functionParam112, &sjt_call83);
#line 63
    sjt_functionParam111 = &sjt_call83;
#line 63
    sjf_string_add(sjt_parent79, sjt_functionParam111, _return);

    if (sjt_call78._refCount == 1) { sjf_string_destroy(&sjt_call78); }
;
    if (sjt_call79._refCount == 1) { sjf_string_destroy(&sjt_call79); }
;
    if (sjt_call80._refCount == 1) { sjf_string_destroy(&sjt_call80); }
;
    if (sjt_call83._refCount == 1) { sjf_string_destroy(&sjt_call83); }
;
}

void sjf_lambda5_invoke_heap(sjs_lambda5* _parent, sjs_json_value* _1, sjs_string** _return) {
    sjs_string sjt_call84 = { -1 };
    sjs_string sjt_call85 = { -1 };
    sjs_string sjt_call86 = { -1 };
    sjs_string sjt_call87 = { -1 };
    sjs_string* sjt_functionParam113 = 0;
    int32_t sjt_functionParam114;
    sjs_string* sjt_functionParam115 = 0;
    int32_t sjt_functionParam116;
    sjs_string* sjt_parent86 = 0;
    sjs_string* sjt_parent87 = 0;
    sjs_json_value* sjt_parent88 = 0;

    sjt_call85._refCount = 1;
#line 63 "lib/sj-lib-json/value.sj"
    sjt_call85.offset = 0;
#line 63
    sjt_call85.count = 1;
#line 63
    sjt_call85.data._refCount = 1;
#line 63
    sjt_call85.data.v = &sjg_string18;
#line 63
    sjf_array_char(&sjt_call85.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call85._isnullterminated = false;
#line 16
    sjf_string(&sjt_call85);
#line 63 "lib/sj-lib-json/value.sj"
    sjt_parent87 = &sjt_call85;
#line 63
    sjt_functionParam114 = (*_parent->lambdaparam10 + 1) * 2;
#line 63
    sjf_spaces(sjt_functionParam114, &sjt_call86);
#line 63
    sjt_functionParam113 = &sjt_call86;
#line 63
    sjf_string_add(sjt_parent87, sjt_functionParam113, &sjt_call84);
#line 63
    sjt_parent86 = &sjt_call84;
#line 62
    sjt_parent88 = _1;
#line 63
    sjt_functionParam116 = *_parent->lambdaparam11 + 1;
#line 63
    sjf_json_value_pretty(sjt_parent88, sjt_functionParam116, &sjt_call87);
#line 63
    sjt_functionParam115 = &sjt_call87;
#line 63
    sjf_string_add_heap(sjt_parent86, sjt_functionParam115, _return);

    if (sjt_call84._refCount == 1) { sjf_string_destroy(&sjt_call84); }
;
    if (sjt_call85._refCount == 1) { sjf_string_destroy(&sjt_call85); }
;
    if (sjt_call86._refCount == 1) { sjf_string_destroy(&sjt_call86); }
;
    if (sjt_call87._refCount == 1) { sjf_string_destroy(&sjt_call87); }
;
}

void sjf_list_string(sjs_list_string* _this) {
}

void sjf_list_string_add(sjs_list_string* _parent, sjs_string* item) {
    int32_t sjt_capture10;
    int32_t sjt_capture9;
    sjs_array_string sjt_funcold6 = { -1 };
    int32_t sjt_functionParam77;
    sjs_string* sjt_functionParam78 = 0;
    sjs_array_string* sjt_parent47 = 0;
    sjs_array_string* sjt_parent48 = 0;
    sjs_array_string* sjt_parent52 = 0;
    sjs_array_string* sjt_parent53 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent47 = &_parent->arr;
#line 29
    sjf_array_string_getcount(sjt_parent47, &sjt_capture9);
#line 35
    sjt_parent48 = &_parent->arr;
#line 35
    sjf_array_string_gettotalcount(sjt_parent48, &sjt_capture10);
    if (sjt_capture9 == sjt_capture10) {
        int32_t sjt_capture11;
        int32_t sjt_functionParam72;
        int32_t sjt_functionParam73;
        int32_t sjt_functionParam74;
        int32_t sjt_functionParam75;
        int32_t sjt_functionParam76;
        sjs_array_string* sjt_parent49 = 0;
        sjs_array_string* sjt_parent50 = 0;
        sjs_array_string* sjt_parent51 = 0;

#line 168 "lib/sj-lib-common/array.sj"
        sjt_parent49 = &_parent->arr;
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam72 = 0;
#line 29 "lib/sj-lib-common/array.sj"
        sjt_parent50 = &_parent->arr;
#line 29
        sjf_array_string_getcount(sjt_parent50, &sjt_functionParam73);
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam75 = 10;
#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent51 = &_parent->arr;
#line 35
        sjf_array_string_gettotalcount(sjt_parent51, &sjt_capture11);
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam76 = sjt_capture11 * 2;
#line 46
        sjf_i32_max(sjt_functionParam75, sjt_functionParam76, &sjt_functionParam74);
#line 46
        sjf_array_string_clone(sjt_parent49, sjt_functionParam72, sjt_functionParam73, sjt_functionParam74, &sjt_funcold6);
#line 46
        if (_parent->arr._refCount == 1) { sjf_array_string_destroy(&_parent->arr); }
;
#line 168 "lib/sj-lib-common/array.sj"
        sjf_array_string_copy(&_parent->arr, &sjt_funcold6);
    }

#line 52
    sjt_parent52 = &_parent->arr;
#line 29
    sjt_parent53 = &_parent->arr;
#line 29
    sjf_array_string_getcount(sjt_parent53, &sjt_functionParam77);
#line 44 "lib/sj-lib-common/list.sj"
    sjt_functionParam78 = item;
#line 44
    sjf_array_string_initat(sjt_parent52, sjt_functionParam77, sjt_functionParam78);

    if (sjt_funcold6._refCount == 1) { sjf_array_string_destroy(&sjt_funcold6); }
;
}

void sjf_list_string_copy(sjs_list_string* _this, sjs_list_string* _from) {
    _this->arr._refCount = 1;
#line 1 "lib/sj-lib-common/list.sj"
    sjf_array_string_copy(&_this->arr, &_from->arr);
}

void sjf_list_string_destroy(sjs_list_string* _this) {
    if (_this->arr._refCount == 1) { sjf_array_string_destroy(&_this->arr); }
;
}

void sjf_list_string_heap(sjs_list_string* _this) {
}

void sjf_log(sjs_log* _this) {
}

void sjf_log_copy(sjs_log* _this, sjs_log* _from) {
#line 13 "lib/sj-lib-common/log.sj"
    _this->minlevel = _from->minlevel;
#line 13
    sjs_hash_type_bool* copyoption2 = (_from->traceincludes._refCount != -1 ? &_from->traceincludes : 0);
    if (copyoption2 != 0) {
        _this->traceincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->traceincludes, copyoption2);
    } else {
        _this->traceincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption3 = (_from->debugincludes._refCount != -1 ? &_from->debugincludes : 0);
    if (copyoption3 != 0) {
        _this->debugincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->debugincludes, copyoption3);
    } else {
        _this->debugincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption4 = (_from->infoincludes._refCount != -1 ? &_from->infoincludes : 0);
    if (copyoption4 != 0) {
        _this->infoincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->infoincludes, copyoption4);
    } else {
        _this->infoincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption5 = (_from->warnincludes._refCount != -1 ? &_from->warnincludes : 0);
    if (copyoption5 != 0) {
        _this->warnincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->warnincludes, copyoption5);
    } else {
        _this->warnincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption6 = (_from->errorincludes._refCount != -1 ? &_from->errorincludes : 0);
    if (copyoption6 != 0) {
        _this->errorincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->errorincludes, copyoption6);
    } else {
        _this->errorincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption7 = (_from->fatalincludes._refCount != -1 ? &_from->fatalincludes : 0);
    if (copyoption7 != 0) {
        _this->fatalincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
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

void sjf_spaces(int32_t count, sjs_string* _return) {
    int32_t sjt_functionParam106;
    int32_t sjt_functionParam107;
    sjs_string* sjt_parent83 = 0;

#line 47 "lib/sj-lib-common/string.sj"
    sjt_parent83 = &g_allthespaces;
#line 81 "lib/sj-lib-json/value.sj"
    sjt_functionParam106 = 0;
#line 80
    sjt_functionParam107 = count;
#line 80
    sjf_string_substr(sjt_parent83, sjt_functionParam106, sjt_functionParam107, _return);
}

void sjf_spaces_heap(int32_t count, sjs_string** _return) {
    int32_t sjt_functionParam108;
    int32_t sjt_functionParam109;
    sjs_string* sjt_parent84 = 0;

#line 47 "lib/sj-lib-common/string.sj"
    sjt_parent84 = &g_allthespaces;
#line 81 "lib/sj-lib-json/value.sj"
    sjt_functionParam108 = 0;
#line 80
    sjt_functionParam109 = count;
#line 80
    sjf_string_substr_heap(sjt_parent84, sjt_functionParam108, sjt_functionParam109, _return);
}

void sjf_string(sjs_string* _this) {
}

void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return) {
    sjs_array_char newdata = { -1 };

    if (item->count == 0) {
        _return->_refCount = 1;
#line 20 "lib/sj-lib-common/string.sj"
        sjf_string_copy(_return, _parent);
    } else {
        bool sjt_capture3;
        int32_t sjt_capture4;
        sjs_array_char* sjt_parent4 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent4 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent4, &sjt_capture4);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture4) {
            int32_t sjt_capture5;
            sjs_array_char* sjt_parent5 = 0;

#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent5 = &_parent->data;
#line 29
            sjf_array_char_getcount(sjt_parent5, &sjt_capture5);
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture3 = ((_parent->offset + _parent->count) == sjt_capture5);
        } else {
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture3 = false;
        }

        if (sjt_capture3) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd1;
            int32_t sjt_forStart1;

#line 25 "lib/sj-lib-common/string.sj"
            newcount = _parent->count;
#line 27
            sjt_forStart1 = 0;
#line 27
            sjt_forEnd1 = item->count;
#line 27
            i = sjt_forStart1;
            while (i < sjt_forEnd1) {
                int32_t sjt_functionParam15;
                char sjt_functionParam16;
                int32_t sjt_functionParam18;
                sjs_array_char* sjt_parent6 = 0;
                sjs_string* sjt_parent8 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent6 = &_parent->data;
#line 28 "lib/sj-lib-common/string.sj"
                sjt_functionParam15 = newcount;
#line 18
                sjt_parent8 = item;
#line 27
                sjt_functionParam18 = i;
#line 27
                sjf_string_getat(sjt_parent8, sjt_functionParam18, &sjt_functionParam16);
#line 27
                sjf_array_char_initat(sjt_parent6, sjt_functionParam15, sjt_functionParam16);
#line 29
                newcount = newcount + 1;
#line 27
                i++;
            }

#line 27
            _return->_refCount = 1;
#line 32
            _return->offset = _parent->offset;
#line 32
            _return->count = newcount;
#line 32
            _return->data._refCount = 1;
#line 32
            sjf_array_char_copy(&_return->data, &_parent->data);
#line 16
            _return->_isnullterminated = false;
#line 16
            sjf_string(_return);
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd2;
            int32_t sjt_forStart2;
            int32_t sjt_functionParam19;
            int32_t sjt_functionParam20;
            int32_t sjt_functionParam21;
            sjs_array_char* sjt_parent10 = 0;
            sjs_array_char* sjt_parent9 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent9 = &_parent->data;
#line 34 "lib/sj-lib-common/string.sj"
            sjt_functionParam19 = _parent->offset;
#line 34
            sjt_functionParam20 = _parent->count;
#line 34
            sjt_functionParam21 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
#line 34
            sjf_array_char_clone(sjt_parent9, sjt_functionParam19, sjt_functionParam20, sjt_functionParam21, &newdata);
#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent10 = &newdata;
#line 29
            sjf_array_char_getcount(sjt_parent10, &newcount);
#line 37 "lib/sj-lib-common/string.sj"
            sjt_forStart2 = 0;
#line 37
            sjt_forEnd2 = item->count;
#line 37
            i = sjt_forStart2;
            while (i < sjt_forEnd2) {
                int32_t sjt_functionParam22;
                char sjt_functionParam23;
                int32_t sjt_functionParam24;
                sjs_array_char* sjt_parent11 = 0;
                sjs_string* sjt_parent12 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent11 = &newdata;
#line 38 "lib/sj-lib-common/string.sj"
                sjt_functionParam22 = newcount;
#line 18
                sjt_parent12 = item;
#line 37
                sjt_functionParam24 = i;
#line 37
                sjf_string_getat(sjt_parent12, sjt_functionParam24, &sjt_functionParam23);
#line 37
                sjf_array_char_initat(sjt_parent11, sjt_functionParam22, sjt_functionParam23);
#line 39
                newcount = newcount + 1;
#line 37
                i++;
            }

#line 37
            _return->_refCount = 1;
#line 42
            _return->offset = 0;
#line 42
            _return->count = newcount;
#line 42
            _return->data._refCount = 1;
#line 42
            sjf_array_char_copy(&_return->data, &newdata);
#line 16
            _return->_isnullterminated = false;
#line 16
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
#line 20 "lib/sj-lib-common/string.sj"
        sjf_string_copy((*_return), _parent);
    } else {
        bool sjt_capture6;
        int32_t sjt_capture7;
        sjs_array_char* sjt_parent13 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent13 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent13, &sjt_capture7);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture7) {
            int32_t sjt_capture8;
            sjs_array_char* sjt_parent14 = 0;

#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent14 = &_parent->data;
#line 29
            sjf_array_char_getcount(sjt_parent14, &sjt_capture8);
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture6 = ((_parent->offset + _parent->count) == sjt_capture8);
        } else {
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture6 = false;
        }

        if (sjt_capture6) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd3;
            int32_t sjt_forStart3;

#line 25 "lib/sj-lib-common/string.sj"
            newcount = _parent->count;
#line 27
            sjt_forStart3 = 0;
#line 27
            sjt_forEnd3 = item->count;
#line 27
            i = sjt_forStart3;
            while (i < sjt_forEnd3) {
                int32_t sjt_functionParam25;
                char sjt_functionParam26;
                int32_t sjt_functionParam27;
                sjs_array_char* sjt_parent15 = 0;
                sjs_string* sjt_parent16 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent15 = &_parent->data;
#line 28 "lib/sj-lib-common/string.sj"
                sjt_functionParam25 = newcount;
#line 18
                sjt_parent16 = item;
#line 27
                sjt_functionParam27 = i;
#line 27
                sjf_string_getat(sjt_parent16, sjt_functionParam27, &sjt_functionParam26);
#line 27
                sjf_array_char_initat(sjt_parent15, sjt_functionParam25, sjt_functionParam26);
#line 29
                newcount = newcount + 1;
#line 27
                i++;
            }

#line 27
            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 27
            (*_return)->_refCount = 1;
#line 32
            (*_return)->offset = _parent->offset;
#line 32
            (*_return)->count = newcount;
#line 32
            (*_return)->data._refCount = 1;
#line 32
            sjf_array_char_copy(&(*_return)->data, &_parent->data);
#line 16
            (*_return)->_isnullterminated = false;
#line 16
            sjf_string_heap((*_return));
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd4;
            int32_t sjt_forStart4;
            int32_t sjt_functionParam28;
            int32_t sjt_functionParam29;
            int32_t sjt_functionParam30;
            sjs_array_char* sjt_parent17 = 0;
            sjs_array_char* sjt_parent18 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent17 = &_parent->data;
#line 34 "lib/sj-lib-common/string.sj"
            sjt_functionParam28 = _parent->offset;
#line 34
            sjt_functionParam29 = _parent->count;
#line 34
            sjt_functionParam30 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
#line 34
            sjf_array_char_clone(sjt_parent17, sjt_functionParam28, sjt_functionParam29, sjt_functionParam30, &newdata);
#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent18 = &newdata;
#line 29
            sjf_array_char_getcount(sjt_parent18, &newcount);
#line 37 "lib/sj-lib-common/string.sj"
            sjt_forStart4 = 0;
#line 37
            sjt_forEnd4 = item->count;
#line 37
            i = sjt_forStart4;
            while (i < sjt_forEnd4) {
                int32_t sjt_functionParam31;
                char sjt_functionParam32;
                int32_t sjt_functionParam33;
                sjs_array_char* sjt_parent19 = 0;
                sjs_string* sjt_parent20 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent19 = &newdata;
#line 38 "lib/sj-lib-common/string.sj"
                sjt_functionParam31 = newcount;
#line 18
                sjt_parent20 = item;
#line 37
                sjt_functionParam33 = i;
#line 37
                sjf_string_getat(sjt_parent20, sjt_functionParam33, &sjt_functionParam32);
#line 37
                sjf_array_char_initat(sjt_parent19, sjt_functionParam31, sjt_functionParam32);
#line 39
                newcount = newcount + 1;
#line 37
                i++;
            }

#line 37
            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 37
            (*_return)->_refCount = 1;
#line 42
            (*_return)->offset = 0;
#line 42
            (*_return)->count = newcount;
#line 42
            (*_return)->data._refCount = 1;
#line 42
            sjf_array_char_copy(&(*_return)->data, &newdata);
#line 16
            (*_return)->_isnullterminated = false;
#line 16
            sjf_string_heap((*_return));
        }
    }

    if (newdata._refCount == 1) { sjf_array_char_destroy(&newdata); }
;
}

void sjf_string_asjson_value(sjs_string* x, sjs_json_value* _return) {
    sjs_string sjt_call10 = { -1 };
    sjs_string sjt_call7 = { -1 };
    sjs_string sjt_call8 = { -1 };
    sjs_string sjt_call9 = { -1 };
    sjs_string* sjt_functionParam34 = 0;
    sjs_string* sjt_functionParam35 = 0;
    sjs_string* sjt_parent21 = 0;
    sjs_string* sjt_parent22 = 0;

    _return->_refCount = 1;
    sjt_call9._refCount = 1;
#line 86 "lib/sj-lib-json/value.sj"
    sjt_call9.offset = 0;
#line 86
    sjt_call9.count = 1;
#line 86
    sjt_call9.data._refCount = 1;
#line 86
    sjt_call9.data.v = &sjg_string5;
#line 86
    sjf_array_char(&sjt_call9.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call9._isnullterminated = false;
#line 16
    sjf_string(&sjt_call9);
#line 86 "lib/sj-lib-json/value.sj"
    sjt_parent22 = &sjt_call9;
#line 84
    sjt_functionParam34 = x;
#line 84
    sjf_string_add(sjt_parent22, sjt_functionParam34, &sjt_call8);
#line 86
    sjt_parent21 = &sjt_call8;
#line 86
    sjt_call10._refCount = 1;
#line 86
    sjt_call10.offset = 0;
#line 86
    sjt_call10.count = 1;
#line 86
    sjt_call10.data._refCount = 1;
#line 86
    sjt_call10.data.v = &sjg_string5;
#line 86
    sjf_array_char(&sjt_call10.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call10._isnullterminated = false;
#line 16
    sjf_string(&sjt_call10);
#line 86 "lib/sj-lib-json/value.sj"
    sjt_functionParam35 = &sjt_call10;
#line 86
    sjf_string_add(sjt_parent21, sjt_functionParam35, &sjt_call7);
#line 86
    sjs_string* copyoption23 = &sjt_call7;
    if (copyoption23 != 0) {
        _return->s._refCount = 1;
#line 86 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_return->s, copyoption23);
    } else {
        _return->s._refCount = -1;
    }

#line 4
    _return->a._refCount = -1;
#line 5
    _return->h._refCount = -1;
#line 5
    sjf_json_value(_return);

    if (sjt_call10._refCount == 1) { sjf_string_destroy(&sjt_call10); }
;
    if (sjt_call7._refCount == 1) { sjf_string_destroy(&sjt_call7); }
;
    if (sjt_call8._refCount == 1) { sjf_string_destroy(&sjt_call8); }
;
    if (sjt_call9._refCount == 1) { sjf_string_destroy(&sjt_call9); }
;
}

void sjf_string_asjson_value_heap(sjs_string* x, sjs_json_value** _return) {
    sjs_string sjt_call11 = { -1 };
    sjs_string sjt_call12 = { -1 };
    sjs_string sjt_call13 = { -1 };
    sjs_string sjt_call14 = { -1 };
    sjs_string* sjt_functionParam36 = 0;
    sjs_string* sjt_functionParam37 = 0;
    sjs_string* sjt_parent23 = 0;
    sjs_string* sjt_parent24 = 0;

    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
    (*_return)->_refCount = 1;
    sjt_call13._refCount = 1;
#line 86 "lib/sj-lib-json/value.sj"
    sjt_call13.offset = 0;
#line 86
    sjt_call13.count = 1;
#line 86
    sjt_call13.data._refCount = 1;
#line 86
    sjt_call13.data.v = &sjg_string5;
#line 86
    sjf_array_char(&sjt_call13.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call13._isnullterminated = false;
#line 16
    sjf_string(&sjt_call13);
#line 86 "lib/sj-lib-json/value.sj"
    sjt_parent24 = &sjt_call13;
#line 84
    sjt_functionParam36 = x;
#line 84
    sjf_string_add(sjt_parent24, sjt_functionParam36, &sjt_call12);
#line 86
    sjt_parent23 = &sjt_call12;
#line 86
    sjt_call14._refCount = 1;
#line 86
    sjt_call14.offset = 0;
#line 86
    sjt_call14.count = 1;
#line 86
    sjt_call14.data._refCount = 1;
#line 86
    sjt_call14.data.v = &sjg_string5;
#line 86
    sjf_array_char(&sjt_call14.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call14._isnullterminated = false;
#line 16
    sjf_string(&sjt_call14);
#line 86 "lib/sj-lib-json/value.sj"
    sjt_functionParam37 = &sjt_call14;
#line 86
    sjf_string_add(sjt_parent23, sjt_functionParam37, &sjt_call11);
#line 86
    sjs_string* copyoption24 = &sjt_call11;
    if (copyoption24 != 0) {
        (*_return)->s._refCount = 1;
#line 86 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&(*_return)->s, copyoption24);
    } else {
        (*_return)->s._refCount = -1;
    }

#line 4
    (*_return)->a._refCount = -1;
#line 5
    (*_return)->h._refCount = -1;
#line 5
    sjf_json_value_heap((*_return));

    if (sjt_call11._refCount == 1) { sjf_string_destroy(&sjt_call11); }
;
    if (sjt_call12._refCount == 1) { sjf_string_destroy(&sjt_call12); }
;
    if (sjt_call13._refCount == 1) { sjf_string_destroy(&sjt_call13); }
;
    if (sjt_call14._refCount == 1) { sjf_string_destroy(&sjt_call14); }
;
}

void sjf_string_asstring(sjs_string* _parent, sjs_string* _return) {
    _return->_refCount = 1;
#line 60 "lib/sj-lib-common/string.sj"
    sjf_string_copy(_return, _parent);
}

void sjf_string_asstring_heap(sjs_string* _parent, sjs_string** _return) {
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
    (*_return)->_refCount = 1;
#line 60 "lib/sj-lib-common/string.sj"
    sjf_string_copy((*_return), _parent);
}

void sjf_string_copy(sjs_string* _this, sjs_string* _from) {
#line 12 "lib/sj-lib-common/string.sj"
    _this->offset = _from->offset;
#line 12
    _this->count = _from->count;
#line 12
    _this->data._refCount = 1;
#line 12
    sjf_array_char_copy(&_this->data, &_from->data);
#line 12
    _this->_isnullterminated = _from->_isnullterminated;
}

void sjf_string_destroy(sjs_string* _this) {
    if (_this->data._refCount == 1) { sjf_array_char_destroy(&_this->data); }
;
}

void sjf_string_getat(sjs_string* _parent, int32_t index, char* _return) {
    int32_t sjt_functionParam17;
    sjs_array_char* sjt_parent7 = 0;

#line 41 "lib/sj-lib-common/array.sj"
    sjt_parent7 = &_parent->data;
#line 64 "lib/sj-lib-common/string.sj"
    sjt_functionParam17 = _parent->offset + index;
#line 64
    sjf_array_char_getat(sjt_parent7, sjt_functionParam17, _return);
}

void sjf_string_hash(sjs_string* _parent, uint32_t* _return) {
#line 148 "lib/sj-lib-common/string.sj"
    #line 147 "lib/sj-lib-common/string.sj"
(*_return) = kh_str_hash_func(((sjs_array*)_parent->data.v)->data + _parent->offset, _parent->count);
return;;
}

void sjf_string_heap(sjs_string* _this) {
}

void sjf_string_isequal(sjs_string* _parent, sjs_string* test, bool* _return) {
#line 73 "lib/sj-lib-common/string.sj"
    sjs_array* arr1 = (sjs_array*)_parent->data.v;
#line 74
    sjs_array* arr2 = (sjs_array*)test->data.v;
#line 75
    if (_parent->count != test->count) {
#line 76
        #line 72 "lib/sj-lib-common/string.sj"
(*_return) = false;
return;;      
#line 77
    }
#line 78
    bool result = memcmp(arr1->data + _parent->offset, arr2->data + test->offset, _parent->count) == 0;
#line 79
    #line 72 "lib/sj-lib-common/string.sj"
(*_return) = result;
return;;      
}

void sjf_string_nullterminate(sjs_string* _parent) {
    bool result2;
    sjs_array_char sjt_funcold1 = { -1 };

#line 133 "lib/sj-lib-common/string.sj"
    result2 = !_parent->_isnullterminated;
    if (result2) {
        int32_t sjt_capture1;
        int32_t sjt_capture2;
        sjs_array_char* sjt_parent1 = 0;
        sjs_array_char* sjt_parent2 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent1 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent1, &sjt_capture1);
#line 29
        sjt_parent2 = &_parent->data;
#line 29
        sjf_array_char_getcount(sjt_parent2, &sjt_capture2);
        if ((((_parent->offset + _parent->count) + 1) > sjt_capture1) || ((_parent->offset + _parent->count) != sjt_capture2)) {
            int32_t sjt_functionParam1;
            int32_t sjt_functionParam2;
            int32_t sjt_functionParam3;
            sjs_array_char* sjt_parent3 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent3 = &_parent->data;
#line 135 "lib/sj-lib-common/string.sj"
            sjt_functionParam1 = _parent->offset;
#line 135
            sjt_functionParam2 = _parent->count;
#line 135
            sjt_functionParam3 = _parent->count + 1;
#line 135
            sjf_array_char_clone(sjt_parent3, sjt_functionParam1, sjt_functionParam2, sjt_functionParam3, &sjt_funcold1);
#line 135
            if (_parent->data._refCount == 1) { sjf_array_char_destroy(&_parent->data); }
;
#line 168 "lib/sj-lib-common/array.sj"
            sjf_array_char_copy(&_parent->data, &sjt_funcold1);
#line 136 "lib/sj-lib-common/string.sj"
            _parent->offset = 0;
        }

#line 139 "lib/sj-lib-common/string.sj"
        ((sjs_array*)_parent->data.v)->data[_parent->offset + _parent->count] = 0;
#line 141
        _parent->_isnullterminated = true;
    }

    if (sjt_funcold1._refCount == 1) { sjf_array_char_destroy(&sjt_funcold1); }
;
}

void sjf_string_substr(sjs_string* _parent, int32_t o, int32_t c, sjs_string* _return) {
    sjs_string sjt_call81 = { -1 };
    int32_t sjt_capture12;
    sjs_array_char* sjt_parent81 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent81 = &_parent->data;
#line 29
    sjf_array_char_getcount(sjt_parent81, &sjt_capture12);
    if (((_parent->offset + o) + c) > sjt_capture12) {
        sjs_string* sjt_functionParam104 = 0;

        sjt_call81._refCount = 1;
#line 49 "lib/sj-lib-common/string.sj"
        sjt_call81.offset = 0;
#line 49
        sjt_call81.count = 13;
#line 49
        sjt_call81.data._refCount = 1;
#line 49
        sjt_call81.data.v = &sjg_string17;
#line 49
        sjf_array_char(&sjt_call81.data);
#line 16
        sjt_call81._isnullterminated = false;
#line 16
        sjf_string(&sjt_call81);
#line 49
        sjt_functionParam104 = &sjt_call81;
#line 49
        sjf_halt(sjt_functionParam104);
    }

#line 29
    _return->_refCount = 1;
#line 53 "lib/sj-lib-common/string.sj"
    _return->offset = _parent->offset + o;
#line 47
    _return->count = c;
#line 47
    _return->data._refCount = 1;
#line 52
    sjf_array_char_copy(&_return->data, &_parent->data);
#line 16
    _return->_isnullterminated = false;
#line 16
    sjf_string(_return);

    if (sjt_call81._refCount == 1) { sjf_string_destroy(&sjt_call81); }
;
}

void sjf_string_substr_heap(sjs_string* _parent, int32_t o, int32_t c, sjs_string** _return) {
    sjs_string sjt_call82 = { -1 };
    int32_t sjt_capture13;
    sjs_array_char* sjt_parent82 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent82 = &_parent->data;
#line 29
    sjf_array_char_getcount(sjt_parent82, &sjt_capture13);
    if (((_parent->offset + o) + c) > sjt_capture13) {
        sjs_string* sjt_functionParam105 = 0;

        sjt_call82._refCount = 1;
#line 49 "lib/sj-lib-common/string.sj"
        sjt_call82.offset = 0;
#line 49
        sjt_call82.count = 13;
#line 49
        sjt_call82.data._refCount = 1;
#line 49
        sjt_call82.data.v = &sjg_string17;
#line 49
        sjf_array_char(&sjt_call82.data);
#line 16
        sjt_call82._isnullterminated = false;
#line 16
        sjf_string(&sjt_call82);
#line 49
        sjt_functionParam105 = &sjt_call82;
#line 49
        sjf_halt(sjt_functionParam105);
    }

#line 29
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 29
    (*_return)->_refCount = 1;
#line 53 "lib/sj-lib-common/string.sj"
    (*_return)->offset = _parent->offset + o;
#line 47
    (*_return)->count = c;
#line 47
    (*_return)->data._refCount = 1;
#line 52
    sjf_array_char_copy(&(*_return)->data, &_parent->data);
#line 16
    (*_return)->_isnullterminated = false;
#line 16
    sjf_string_heap((*_return));

    if (sjt_call82._refCount == 1) { sjf_string_destroy(&sjt_call82); }
;
}

void sjf_type_hash(int32_t val, uint32_t* _return) {
    int32_t sjt_cast1;

#line 5 "lib/sj-lib-common/type.sj"
    sjt_cast1 = val;
#line 6
    (*_return) = (uint32_t)sjt_cast1;
}

void sjf_type_isequal(int32_t l, int32_t r, bool* _return) {
#line 10 "lib/sj-lib-common/type.sj"
    (*_return) = l == r;
}

int main(int argc, char** argv) {
#line 1 "lib/sj-lib-common/log.sj"
    g_loglevel_trace = 0;
#line 1
    g_loglevel_debug = 1;
#line 1
    g_loglevel_info = 2;
#line 1
    g_loglevel_warn = 3;
#line 1
    g_loglevel_error = 4;
#line 1
    g_loglevel_fatal = 5;
#line 1 "lib/sj-lib-common/f32.sj"
    g_f32_pi = 3.14159265358979323846f;
#line 1 "lib/sj-lib-common/i32.sj"
    g_u32_maxvalue = (uint32_t)4294967295u;
#line 3
    result1 = -1;
#line 3
    g_i32_maxvalue = result1 - 2147483647;
#line 4
    g_i32_minvalue = 2147483647;
#line 10 "lib/sj-lib-common/log.sj"
    g_log_includeall._refCount = -1;
#line 10
    sjt_value1._refCount = 1;
#line 10
    sjf_hash_type_bool(&sjt_value1);
#line 11
    sjs_hash_type_bool* copyoption1 = &sjt_value1;
    if (copyoption1 != 0) {
        g_log_excludeall._refCount = 1;
#line 11 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log_excludeall, copyoption1);
    } else {
        g_log_excludeall._refCount = -1;
    }

#line 11
    g_log._refCount = 1;
#line 13
    g_log.minlevel = g_loglevel_warn;
#line 13
    sjs_hash_type_bool* copyoption8 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption8 != 0) {
        g_log.traceincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.traceincludes, copyoption8);
    } else {
        g_log.traceincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption9 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption9 != 0) {
        g_log.debugincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.debugincludes, copyoption9);
    } else {
        g_log.debugincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption10 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption10 != 0) {
        g_log.infoincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.infoincludes, copyoption10);
    } else {
        g_log.infoincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption11 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption11 != 0) {
        g_log.warnincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.warnincludes, copyoption11);
    } else {
        g_log.warnincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption12 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption12 != 0) {
        g_log.errorincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.errorincludes, copyoption12);
    } else {
        g_log.errorincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption13 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption13 != 0) {
        g_log.fatalincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.fatalincludes, copyoption13);
    } else {
        g_log.fatalincludes._refCount = -1;
    }

#line 13
    sjf_log(&g_log);
#line 2 "lib/sj-lib-common/weakptr.sj"
    ptr_init();
#line 3
    weakptr_init();
#line 7 "lib/sj-lib-common/clock.sj"
    g_clocks_per_sec = 0;
#line 9
    g_clocks_per_sec = CLOCKS_PER_SEC;
#line 9
    g_allthespaces._refCount = 1;
#line 79 "lib/sj-lib-json/value.sj"
    g_allthespaces.offset = 0;
#line 79
    g_allthespaces.count = 592;
#line 79
    g_allthespaces.data._refCount = 1;
#line 79
    g_allthespaces.data.v = &sjg_string1;
#line 79
    sjf_array_char(&g_allthespaces.data);
#line 16 "lib/sj-lib-common/string.sj"
    g_allthespaces._isnullterminated = false;
#line 16
    sjf_string(&g_allthespaces);
#line 3 "test3.sj"
    sjt_functionParam8 = 1;
#line 3
    sjf_i32_asjson_value(sjt_functionParam8, &g_v1);
#line 4
    sjt_functionParam11 = true;
#line 4
    sjf_bool_asjson_value(sjt_functionParam11, &g_v2);
#line 5
    sjt_functionParam14 = 1.0f;
#line 5
    sjf_f32_asjson_value(sjt_functionParam14, &g_v3);
#line 5
    sjt_call15._refCount = 1;
#line 6
    sjt_call15.offset = 0;
#line 6
    sjt_call15.count = 5;
#line 6
    sjt_call15.data._refCount = 1;
#line 6
    sjt_call15.data.v = &sjg_string4;
#line 6
    sjf_array_char(&sjt_call15.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call15._isnullterminated = false;
#line 16
    sjf_string(&sjt_call15);
#line 6 "test3.sj"
    sjt_functionParam38 = &sjt_call15;
#line 6
    sjf_string_asjson_value(sjt_functionParam38, &g_v4);
#line 6
    sjt_call16._refCount = 1;
#line 7
    sjt_call16.v = createarray(sizeof(sjs_json_value), 4);
#line 7
    sjf_array_value(&sjt_call16);
#line 7
    sjt_functionParam39 = &sjt_call16;
#line 7
    sjs_array_value* array1;
#line 7
    array1 = sjt_functionParam39;
#line 7
    sjt_parent25 = array1;
#line 7
    sjt_functionParam40 = 0;
#line 7
    sjt_functionParam41 = &g_v1;
#line 7
    sjf_array_value_initat(sjt_parent25, sjt_functionParam40, sjt_functionParam41);
#line 7
    sjt_parent26 = array1;
#line 7
    sjt_functionParam42 = 1;
#line 7
    sjt_functionParam43 = &g_v2;
#line 7
    sjf_array_value_initat(sjt_parent26, sjt_functionParam42, sjt_functionParam43);
#line 7
    sjt_parent27 = array1;
#line 7
    sjt_functionParam44 = 2;
#line 7
    sjt_functionParam45 = &g_v3;
#line 7
    sjf_array_value_initat(sjt_parent27, sjt_functionParam44, sjt_functionParam45);
#line 7
    sjt_parent28 = array1;
#line 7
    sjt_functionParam46 = 3;
#line 7
    sjt_functionParam47 = &g_v4;
#line 7
    sjf_array_value_initat(sjt_parent28, sjt_functionParam46, sjt_functionParam47);
#line 7
    sjf_array_bang_json_value_asjson_value(sjt_functionParam39, &g_v5);
#line 7
    sjt_call17._refCount = 1;
#line 7
    sjf_hash_string_value(&sjt_call17);
#line 8
    sjt_functionParam48 = &sjt_call17;
#line 8
    sjs_hash_string_value* hash1;
#line 8
    hash1 = sjt_functionParam48;
#line 8
    sjt_parent29 = hash1;
#line 8
    sjt_functionParam49 = 1;
#line 8
    sjf_hash_string_value_resize(sjt_parent29, sjt_functionParam49);
#line 8
    sjt_parent30 = hash1;
#line 8
    sjt_call18._refCount = 1;
#line 8
    sjt_call18.offset = 0;
#line 8
    sjt_call18.count = 3;
#line 8
    sjt_call18.data._refCount = 1;
#line 8
    sjt_call18.data.v = &sjg_string6;
#line 8
    sjf_array_char(&sjt_call18.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call18._isnullterminated = false;
#line 16
    sjf_string(&sjt_call18);
#line 8 "test3.sj"
    sjt_functionParam50 = &sjt_call18;
#line 8
    sjt_functionParam51 = &g_v5;
#line 8
    sjf_hash_string_value_setat(sjt_parent30, sjt_functionParam50, sjt_functionParam51);
#line 8
    sjt_parent31 = hash1;
#line 8
    sjt_call19._refCount = 1;
#line 8
    sjt_call19.offset = 0;
#line 8
    sjt_call19.count = 3;
#line 8
    sjt_call19.data._refCount = 1;
#line 8
    sjt_call19.data.v = &sjg_string7;
#line 8
    sjf_array_char(&sjt_call19.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call19._isnullterminated = false;
#line 16
    sjf_string(&sjt_call19);
#line 8 "test3.sj"
    sjt_functionParam52 = &sjt_call19;
#line 8
    sjt_call21._refCount = 1;
#line 8
    sjt_call21.offset = 0;
#line 8
    sjt_call21.count = 5;
#line 8
    sjt_call21.data._refCount = 1;
#line 8
    sjt_call21.data.v = &sjg_string8;
#line 8
    sjf_array_char(&sjt_call21.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call21._isnullterminated = false;
#line 16
    sjf_string(&sjt_call21);
#line 8 "test3.sj"
    sjt_functionParam54 = &sjt_call21;
#line 8
    sjf_string_asjson_value(sjt_functionParam54, &sjt_call20);
#line 8
    sjt_functionParam53 = &sjt_call20;
#line 8
    sjf_hash_string_value_setat(sjt_parent31, sjt_functionParam52, sjt_functionParam53);
#line 8
    sjf_hash_bang_string_json_value_asjson_value(sjt_functionParam48, &g_v6);
#line 39 "lib/sj-lib-json/value.sj"
    sjt_parent72 = &g_v6;
#line 39
    sjf_json_value_render(sjt_parent72, &sjt_call22);
#line 9 "test3.sj"
    sjt_functionParam55 = &sjt_call22;
#line 9
    sjf_debug_writeline(sjt_functionParam55);
#line 57 "lib/sj-lib-json/value.sj"
    sjt_parent121 = &g_v6;
#line 57
    sjt_functionParam161 = 0;
#line 57
    sjf_json_value_pretty(sjt_parent121, sjt_functionParam161, &sjt_call70);
#line 10 "test3.sj"
    sjt_functionParam100 = &sjt_call70;
#line 10
    sjf_debug_writeline(sjt_functionParam100);
    main_destroy();
    return 0;
}

void main_destroy() {

    if (g_allthespaces._refCount == 1) { sjf_string_destroy(&g_allthespaces); }
;
    if (g_log._refCount == 1) { sjf_log_destroy(&g_log); }
;
    if (g_log_excludeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_excludeall); }
;
    if (g_log_includeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_includeall); }
;
    if (g_v1._refCount == 1) { sjf_json_value_destroy(&g_v1); }
;
    if (g_v2._refCount == 1) { sjf_json_value_destroy(&g_v2); }
;
    if (g_v3._refCount == 1) { sjf_json_value_destroy(&g_v3); }
;
    if (g_v4._refCount == 1) { sjf_json_value_destroy(&g_v4); }
;
    if (g_v5._refCount == 1) { sjf_json_value_destroy(&g_v5); }
;
    if (g_v6._refCount == 1) { sjf_json_value_destroy(&g_v6); }
;
    if (sjt_call15._refCount == 1) { sjf_string_destroy(&sjt_call15); }
;
    if (sjt_call16._refCount == 1) { sjf_array_value_destroy(&sjt_call16); }
;
    if (sjt_call17._refCount == 1) { sjf_hash_string_value_destroy(&sjt_call17); }
;
    if (sjt_call18._refCount == 1) { sjf_string_destroy(&sjt_call18); }
;
    if (sjt_call19._refCount == 1) { sjf_string_destroy(&sjt_call19); }
;
    if (sjt_call20._refCount == 1) { sjf_json_value_destroy(&sjt_call20); }
;
    if (sjt_call21._refCount == 1) { sjf_string_destroy(&sjt_call21); }
;
    if (sjt_call22._refCount == 1) { sjf_string_destroy(&sjt_call22); }
;
    if (sjt_call70._refCount == 1) { sjf_string_destroy(&sjt_call70); }
;
    if (sjt_value1._refCount == 1) { sjf_hash_type_bool_destroy(&sjt_value1); }
;
}
