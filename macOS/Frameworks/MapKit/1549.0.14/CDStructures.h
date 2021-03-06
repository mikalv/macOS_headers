//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct MKUILabel {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
    id _field15;
    id _field16;
    struct __conFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :22;
    } _field17;
    id _field18;
    SEL _field19;
    double _field20;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSImage {
    Class _field1;
    id _field2;
    struct CGSize _field3;
    struct __imageFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :8;
    } _field4;
    id _field5;
    id _field6;
};

struct NSView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
};

struct _GEOTileKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
    unsigned int provider:8;
    unsigned int expires:1;
    unsigned int reserved1:7;
    unsigned char reserved2[4];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __VFlags {
    unsigned int :1;
    unsigned int :1;
    unsigned int :5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :6;
    unsigned int :1;
    unsigned int :1;
};

struct __VFlags2 {
    unsigned int :14;
    unsigned int :14;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int hasMultiplePhotos;
    unsigned int isFirstImageRequested;
    unsigned int isFirstImagePreloaded;
} CDStruct_0e9d808f;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    long long x;
    long long y;
    long long z;
    double contentScaleFactor;
} CDStruct_cbb88d5e;

typedef struct {
    double _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_46f4fb6f;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field4;
} CDStruct_e02beb0c;

typedef struct {
    int _field1;
    int _field2;
    struct {
        unsigned int :1;
        unsigned int :1;
    } _field3;
} CDStruct_c55e649d;

typedef struct {
    long long _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    id _field5;
    char _field6;
} CDStruct_18a50e2d;

typedef struct {
    struct CGSize _field1;
    double _field2;
    double _field3;
    double _field4;
    struct CGSize _field5;
    double _field6;
    double _field7;
    double _field8;
    long long _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    double _field23;
    double _field24;
    double _field25;
    char _field26;
    double _field27;
    double _field28;
    double _field29;
    char _field30;
    char _field31;
} CDStruct_07415270;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double latitudeDelta;
    double longitudeDelta;
} CDStruct_951efa70;

typedef struct {
    double width;
    double height;
} CDStruct_8caa76fc;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_2c43369c center;
    CDStruct_951efa70 span;
} CDStruct_feeb6407;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    CDStruct_8caa76fc size;
} CDStruct_02837cd9;

