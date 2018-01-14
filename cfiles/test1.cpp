#include <lib/sj-lib-common/common.h>
#include <lib/sj-lib-json/rapidjson/document.h>
#include <lib/sj-lib-json/rapidjson/stringbuffer.h>
#include <lib/sj-lib-json/rapidjson/writer.h>

struct {
    int refcount;
    int size;
    int count;
    char data[370];
} sjg_string1 = { 1, 370, 369, "{\r\n    \"title\" : \"This is a title\",\r\n    \"parentalAdvisory\" : \"This is a parental advisory\",\r\n    \"formatList\" : [\r\n        \"Format 1\",\r\n        \"Format 2\"\r\n    ],\r\n    \"hasAdultText\" : true,\r\n    \"strings\" : {\r\n        \"adult_17481\" : \"Adult Text\",\r\n        \"dp_product_info_energy_class\" : \"Energy Class Level\"\r\n    },\r\n    \"energyEfficiencyClass\" : \"Energy Class\"\r\n}"};
struct {
    int refcount;
    int size;
    int count;
    char data[20];
} sjg_string2 = { 1, 20, 19, "copy is not allowed"};

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
#define sjs_json_document_typeId 26
#define sjs_json_value_typeId 30

typedef struct td_sjs_hash_type_bool sjs_hash_type_bool;
typedef struct td_sjs_log sjs_log;
typedef struct td_sjs_array_char sjs_array_char;
typedef struct td_sjs_string sjs_string;
typedef struct td_sjs_json_document sjs_json_document;
typedef struct td_sjs_json_value sjs_json_value;

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

struct td_sjs_json_document {
    int _refCount;
    void* d;
};

struct td_sjs_json_value {
    int _refCount;
    sjs_json_document* root;
    void* v;
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
int32_t g_loglevel_debug;
int32_t g_loglevel_error;
int32_t g_loglevel_fatal;
int32_t g_loglevel_info;
int32_t g_loglevel_trace;
int32_t g_loglevel_warn;

int32_t g_clocks_per_sec;
sjs_json_value g_data = { -1 };
float g_f32_pi;
int32_t g_i32_maxvalue;
int32_t g_i32_minvalue;
sjs_log g_log = { -1 };
sjs_hash_type_bool g_log_excludeall = { -1 };
sjs_hash_type_bool g_log_includeall = { -1 };
sjs_string g_text = { -1 };
uint32_t g_u32_maxvalue;
int32_t result1;
sjs_string sjt_call2 = { -1 };
sjs_string* sjt_functionParam5 = 0;
sjs_string* sjt_functionParam6 = 0;
sjs_json_document* sjt_parent3 = 0;
sjs_json_value* sjt_parent5 = 0;
sjs_hash_type_bool sjt_value1 = { -1 };

void sjf_array_char(sjs_array_char* _this);
void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return);
void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return);
void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from);
void sjf_array_char_destroy(sjs_array_char* _this);
void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return);
void sjf_array_char_heap(sjs_array_char* _this);
void sjf_debug_writeline(sjs_string* data);
void sjf_halt(sjs_string* reason);
void sjf_hash_type_bool(sjs_hash_type_bool* _this);
void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key);
void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val);
void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from);
void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this);
void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this);
void sjf_json_document_copy(sjs_json_document* _this, sjs_json_document* _from);
void sjf_json_document_destroy(sjs_json_document* _this);
void sjf_json_document_heap(sjs_json_document* _this);
void sjf_json_document_root(sjs_json_document* _parent, sjs_json_value* _return);
void sjf_json_document_root_heap(sjs_json_document* _parent, sjs_json_value** _return);
void sjf_json_load_heap(sjs_string* s, sjs_json_document** _return);
void sjf_json_value(sjs_json_value* _this);
void sjf_json_value_asstring(sjs_json_value* _parent, sjs_string* _return);
void sjf_json_value_asstring_heap(sjs_json_value* _parent, sjs_string** _return);
void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from);
void sjf_json_value_destroy(sjs_json_value* _this);
void sjf_json_value_heap(sjs_json_value* _this);
void sjf_log(sjs_log* _this);
void sjf_log_copy(sjs_log* _this, sjs_log* _from);
void sjf_log_destroy(sjs_log* _this);
void sjf_log_heap(sjs_log* _this);
void sjf_string(sjs_string* _this);
void sjf_string_copy(sjs_string* _this, sjs_string* _from);
void sjf_string_destroy(sjs_string* _this);
void sjf_string_heap(sjs_string* _this);
void sjf_string_nullterminate(sjs_string* _parent);
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
    return ((sjs_array*)str->data.v)->data;
}
#include <lib/sj-lib-common/common.cpp>
typedef rapidjson::GenericValue<rapidjson::UTF8<>, rapidjson::MemoryPoolAllocator<> > JsonValue;
void sjf_array_char(sjs_array_char* _this) {
#line 355 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 356
        _this->v = &g_empty;
#line 357
    }
#line 358
    sjs_array* arr = (sjs_array*)_this->v;
#line 359
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
    newArr->refcount = 1;
#line 190
    newArr->size = newsize;
#line 191
    newArr->count = count;
#line 193
    #if true
#line 194
    memcpy(newp, p, sizeof(char) * count);
#line 195
    #else
#line 196
    for (int i = 0; i < count; i++) {
#line 197
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 198
    }
#line 199
    #endif
#line 199
    _return->_refCount = 1;
#line 201
    _return->v = newv;
#line 201
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
    newArr->refcount = 1;
#line 190
    newArr->size = newsize;
#line 191
    newArr->count = count;
#line 193
    #if true
#line 194
    memcpy(newp, p, sizeof(char) * count);
#line 195
    #else
#line 196
    for (int i = 0; i < count; i++) {
#line 197
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 198
    }
#line 199
    #endif
#line 199
    (*_return) = (sjs_array_char*)malloc(sizeof(sjs_array_char));
#line 199
    (*_return)->_refCount = 1;
#line 201
    (*_return)->v = newv;
#line 201
    sjf_array_char_heap((*_return));
}

void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 364
    sjs_array* arr = (sjs_array*)_this->v;
#line 365
    arr->refcount++;
}

void sjf_array_char_destroy(sjs_array_char* _this) {
#line 369 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 370
    arr->refcount--;
#line 371
    if (arr->refcount == 0) {
#line 372
        #if !true && !false
#line 373
        char* p = (char*)arr->data;
#line 374
        for (int i = 0; i < arr->count; i++) {
#line 375
            ;
#line 376
        }
#line 377
        #endif
#line 378
        free(arr);
#line 379
    }
}

void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return) {
#line 37 "lib/sj-lib-common/array.sj"
    #line 36 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_char_heap(sjs_array_char* _this) {
#line 355 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 356
        _this->v = &g_empty;
#line 357
    }
#line 358
    sjs_array* arr = (sjs_array*)_this->v;
#line 359
    arr->refcount++;
}

void sjf_debug_writeline(sjs_string* data) {
#line 10 "lib/sj-lib-common/debug.sj"
    debugout("%s\n", string_char(data));
}

void sjf_halt(sjs_string* reason) {
#line 3 "lib/sj-lib-common/halt.sj"
    halt("%s\n", string_char(reason));
}

void sjf_hash_type_bool(sjs_hash_type_bool* _this) {
#line 225 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key) {
#line 180 "lib/sj-lib-common/hash.sj"
    #if false
#line 181
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;    
#line 182
    khiter_t k = kh_get(type_bool_hash_type, p, key);
#line 183
    if (k != kh_end(p)) {
#line 184
        kh_del(type_bool_hash_type, p, k);
#line 185
    }
#line 186
    #endif
}

void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val) {
#line 192 "lib/sj-lib-common/hash.sj"
    #if false
#line 193
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;
#line 194
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 195
        if (kh_exist(p, k)) {
#line 196
            bool t = kh_value(p, k);
#line 197
            if (t == val) {
#line 198
                kh_del(type_bool_hash_type, p, k);
#line 199
            }
#line 200
        }
#line 201
    }
#line 202
    #endif
}

void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from) {
#line 230 "lib/sj-lib-common/hash.sj"
    _this->_hash = _from->_hash;
#line 231
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 232
    p->refcount++;
}

void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this) {
#line 236 "lib/sj-lib-common/hash.sj"
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 237
    p->refcount--;
#line 238
    if (p->refcount == 0) {
#line 239
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 240
            if (kh_exist(p, k)) {
#line 242
                #if false
#line 243
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovekey };
#line 244
                weakptr_cb_remove(kh_key(p, k), cb);
#line 245
                #else
#line 246
                ;
#line 247
                #endif
#line 249
                #if false
#line 250
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovevalue };
#line 251
                weakptr_cb_remove(kh_value(p, k), cb);
#line 252
                #else
#line 253
                ;
#line 254
                #endif
#line 255
            }
#line 256
        }
#line 257
        kh_destroy(type_bool_hash_type, (khash_t(type_bool_hash_type)*)_this->_hash);
#line 258
    }
}

void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this) {
#line 225 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_json_document_copy(sjs_json_document* _this, sjs_json_document* _from) {
    sjs_string sjt_call1 = { -1 };
    sjs_string* sjt_functionParam4 = 0;

#line 22 "lib/sj-lib-json/main.sj"
    _this->d = _from->d;
#line 22
    sjt_call1._refCount = 1;
#line 36
    sjt_call1.offset = 0;
#line 36
    sjt_call1.count = 19;
#line 36
    sjt_call1.data._refCount = 1;
#line 36
    sjt_call1.data.v = &sjg_string2;
#line 36
    sjf_array_char(&sjt_call1.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call1._isnullterminated = false;
#line 16
    sjf_string(&sjt_call1);
#line 36 "lib/sj-lib-json/main.sj"
    sjt_functionParam4 = &sjt_call1;
#line 36
    sjf_halt(sjt_functionParam4);

    if (sjt_call1._refCount == 1) { sjf_string_destroy(&sjt_call1); }
;
}

void sjf_json_document_destroy(sjs_json_document* _this) {
#line 39 "lib/sj-lib-json/main.sj"
    if (_this->d) {
#line 40
        delete (rapidjson::Document*)_this->d;
#line 41
    }
}

void sjf_json_document_heap(sjs_json_document* _this) {
}

void sjf_json_document_root(sjs_json_document* _parent, sjs_json_value* _return) {
    sjs_json_value v = { -1 };

    v._refCount = 1;
#line 27 "lib/sj-lib-json/main.sj"
    v.root = _parent;
#line 27
    v.root->_refCount++;
#line 47
    v.v = 0;
#line 47
    sjf_json_value(&v);
#line 29
    v.v = _parent->d;
#line 29
    _return->_refCount = 1;
#line 26
    sjf_json_value_copy(_return, &v);

    if (v._refCount == 1) { sjf_json_value_destroy(&v); }
;
}

void sjf_json_document_root_heap(sjs_json_document* _parent, sjs_json_value** _return) {
    sjs_json_value v = { -1 };

    v._refCount = 1;
#line 27 "lib/sj-lib-json/main.sj"
    v.root = _parent;
#line 27
    v.root->_refCount++;
#line 47
    v.v = 0;
#line 47
    sjf_json_value(&v);
#line 29
    v.v = _parent->d;
#line 29
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
#line 29
    (*_return)->_refCount = 1;
#line 26
    sjf_json_value_copy((*_return), &v);

    if (v._refCount == 1) { sjf_json_value_destroy(&v); }
;
}

void sjf_json_load_heap(sjs_string* s, sjs_json_document** _return) {
    void* d;
    sjs_string* sjt_parent4 = 0;

#line 12 "lib/sj-lib-json/main.sj"
    sjt_parent4 = s;
#line 12
    sjf_string_nullterminate(sjt_parent4);
#line 14
    d = 0;
#line 16
    d = new rapidjson::Document();
#line 17
    ((rapidjson::Document*)d)->Parse(string_char(s));
#line 17
    (*_return) = (sjs_json_document*)malloc(sizeof(sjs_json_document));
#line 17
    (*_return)->_refCount = 1;
#line 19
    (*_return)->d = d;
#line 19
    sjf_json_document_heap((*_return));
}

void sjf_json_value(sjs_json_value* _this) {
}

void sjf_json_value_asstring(sjs_json_value* _parent, sjs_string* _return) {
    if (_parent->v != 0) {
        int32_t count;
        void* vresult;

#line 142 "lib/sj-lib-json/main.sj"
        vresult = 0;
#line 143
        count = 0;
#line 145
        count = ((JsonValue*)_parent->v)->GetStringLength();
#line 146
        int datasize = (((count - 1) / 256) + 1) * 256;
#line 147
        sjs_array* arr = createarray(1, datasize);
#line 148
        vresult = (void*)arr;
#line 149
        arr->count = count;
#line 150
        memcpy(arr->data, ((JsonValue*)_parent->v)->GetString(), count);
#line 150
        _return->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
        _return->offset = 0;
#line 152 "lib/sj-lib-json/main.sj"
        _return->count = count;
#line 152
        _return->data._refCount = 1;
#line 152
        _return->data.v = vresult;
#line 152
        sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->_isnullterminated = false;
#line 16
        sjf_string(_return);
    } else {
        _return->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
        _return->offset = 0;
#line 14
        _return->count = 0;
#line 14
        _return->data._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
        _return->data.v = 0;
#line 27
        sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->_isnullterminated = false;
#line 16
        sjf_string(_return);
    }
}

void sjf_json_value_asstring_heap(sjs_json_value* _parent, sjs_string** _return) {
    if (_parent->v != 0) {
        int32_t count;
        void* vresult;

#line 142 "lib/sj-lib-json/main.sj"
        vresult = 0;
#line 143
        count = 0;
#line 145
        count = ((JsonValue*)_parent->v)->GetStringLength();
#line 146
        int datasize = (((count - 1) / 256) + 1) * 256;
#line 147
        sjs_array* arr = createarray(1, datasize);
#line 148
        vresult = (void*)arr;
#line 149
        arr->count = count;
#line 150
        memcpy(arr->data, ((JsonValue*)_parent->v)->GetString(), count);
#line 150
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 150
        (*_return)->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
        (*_return)->offset = 0;
#line 152 "lib/sj-lib-json/main.sj"
        (*_return)->count = count;
#line 152
        (*_return)->data._refCount = 1;
#line 152
        (*_return)->data.v = vresult;
#line 152
        sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->_isnullterminated = false;
#line 16
        sjf_string_heap((*_return));
    } else {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
#line 13 "lib/sj-lib-common/string.sj"
        (*_return)->offset = 0;
#line 14
        (*_return)->count = 0;
#line 14
        (*_return)->data._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
        (*_return)->data.v = 0;
#line 27
        sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->_isnullterminated = false;
#line 16
        sjf_string_heap((*_return));
    }
}

void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from) {
#line 45 "lib/sj-lib-json/main.sj"
    _this->root = _from->root;
#line 45
    _this->root->_refCount++;
#line 45
    _this->v = _from->v;
}

void sjf_json_value_destroy(sjs_json_value* _this) {
    _this->root->_refCount--;
    if (_this->root->_refCount <= 0) {
        weakptr_release(_this->root);
        sjf_json_document_destroy(_this->root);
        free(_this->root);
    }
}

void sjf_json_value_heap(sjs_json_value* _this) {
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

void sjf_string(sjs_string* _this) {
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

void sjf_string_heap(sjs_string* _this) {
}

void sjf_string_nullterminate(sjs_string* _parent) {
    bool result2;
    sjs_array_char sjt_funcold1 = { -1 };

#line 133 "lib/sj-lib-common/string.sj"
    result2 = !_parent->_isnullterminated;
    if (result2) {
        int32_t sjt_capture1;
        sjs_array_char* sjt_parent1 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent1 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent1, &sjt_capture1);
        if ((_parent->count + 1) > sjt_capture1) {
            int32_t sjt_functionParam1;
            int32_t sjt_functionParam2;
            int32_t sjt_functionParam3;
            sjs_array_char* sjt_parent2 = 0;

            sjt_funcold1._refCount = 1;
#line 168 "lib/sj-lib-common/array.sj"
            sjf_array_char_copy(&sjt_funcold1, &_parent->data);
#line 168
            sjt_parent2 = &_parent->data;
#line 135 "lib/sj-lib-common/string.sj"
            sjt_functionParam1 = _parent->offset;
#line 135
            sjt_functionParam2 = _parent->count;
#line 135
            sjt_functionParam3 = _parent->count + 1;
#line 135
            sjf_array_char_clone(sjt_parent2, sjt_functionParam1, sjt_functionParam2, sjt_functionParam3, &sjt_funcold1);
#line 135
            if (_parent->data._refCount == 1) { sjf_array_char_destroy(&_parent->data); }
;
#line 168 "lib/sj-lib-common/array.sj"
            sjf_array_char_copy(&_parent->data, &sjt_funcold1);
#line 136 "lib/sj-lib-common/string.sj"
            _parent->offset = 0;
        }

#line 139 "lib/sj-lib-common/string.sj"
        ((sjs_array*)_parent->data.v)->data[_parent->count] = 0;
#line 141
        _parent->_isnullterminated = true;
    }

    if (sjt_funcold1._refCount == 1) { sjf_array_char_destroy(&sjt_funcold1); }
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
    g_text._refCount = 1;
#line 3 "test1.sj"
    g_text.offset = 0;
#line 3
    g_text.count = 369;
#line 3
    g_text.data._refCount = 1;
#line 3
    g_text.data.v = &sjg_string1;
#line 3
    sjf_array_char(&g_text.data);
#line 16 "lib/sj-lib-common/string.sj"
    g_text._isnullterminated = false;
#line 16
    sjf_string(&g_text);
#line 4 "test1.sj"
    sjt_functionParam5 = &g_text;
#line 4
    sjf_json_load_heap(sjt_functionParam5, &sjt_parent3);
#line 4
    sjf_json_document_root(sjt_parent3, &g_data);
#line 140 "lib/sj-lib-json/main.sj"
    sjt_parent5 = &g_data;
#line 140
    sjf_json_value_asstring(sjt_parent5, &sjt_call2);
#line 6 "test1.sj"
    sjt_functionParam6 = &sjt_call2;
#line 6
    sjf_debug_writeline(sjt_functionParam6);
    main_destroy();
    return 0;
}

void main_destroy() {

    sjt_parent3->_refCount--;
    if (sjt_parent3->_refCount <= 0) {
        weakptr_release(sjt_parent3);
        sjf_json_document_destroy(sjt_parent3);
        free(sjt_parent3);
    }
    if (g_data._refCount == 1) { sjf_json_value_destroy(&g_data); }
;
    if (g_log._refCount == 1) { sjf_log_destroy(&g_log); }
;
    if (g_log_excludeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_excludeall); }
;
    if (g_log_includeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_includeall); }
;
    if (g_text._refCount == 1) { sjf_string_destroy(&g_text); }
;
    if (sjt_call2._refCount == 1) { sjf_string_destroy(&sjt_call2); }
;
    if (sjt_value1._refCount == 1) { sjf_hash_type_bool_destroy(&sjt_value1); }
;
}
