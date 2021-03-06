//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class MTLIOAccelBuffer, MTLIOAccelDevice, MTLIOAccelDeviceShmem, MTLIOAccelDeviceShmemPool, MTLIOAccelHeap, MTLIOAccelPooledResource, MTLIOAccelResource, MTLIOAccelResourcePool, MTLPipelineBufferDescriptorArrayInternal, MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLResourceAllocationInfo, MTLResourceList, MTLStageInputOutputDescriptor, MTLStencilDescriptorInternal, MTLVertexDescriptorInternal, NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Chunk {
    struct VariantEntry _field1[4];
    struct Chunk *_field2;
};

struct IOAccelClientSharedRO;

struct IOAccelClientSharedRW;

struct IOAccelGetResourceInfoReturnData {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13[2];
    unsigned int _field14;
    unsigned long long _field15[0];
};

struct IOAccelNewResourceArgs {
    struct IOAccelNewResourceData _field1;
};

struct IOAccelNewResourceData {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned int _field13;
    unsigned long long _field14[2];
    union {
        struct {
            unsigned long long _field1;
            unsigned long long _field2;
            unsigned int _field3;
            unsigned int _field4;
            unsigned int _field5;
            unsigned int _field6[1];
        } _field1;
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned long long _field3[3];
        } _field2;
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned int _field3;
            unsigned int _field4;
            unsigned long long _field5[2];
        } _field3;
    } _field15;
};

struct IOAccelResourceInfo {
    struct __IOSurface *iosurface;
    unsigned int resourceID;
    unsigned int resourceSize;
    unsigned int iosurfaceField;
};

struct IOAccelResourceList {
    unsigned short _field1[256];
    struct IOAccelSegmentResourceDescriptorGroup *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    CDUnknownFunctionPointerType _field12;
    void *_field13;
};

struct IOAccelSegmentListHeader {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct IOAccelSegmentResourceListHeader _field4[0];
};

struct IOAccelSegmentResourceDescriptorGroup {
    unsigned int _field1[6];
    unsigned int _field2[6];
    unsigned short _field3[6];
    unsigned short _field4;
    unsigned short _field5;
};

struct IOAccelSegmentResourceListHeader {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct IOAccelSegmentResourceDescriptorGroup _field6[0];
};

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct MTLArgumentDescriptorPrivate {
    unsigned long long dataType;
    unsigned long long index;
    unsigned long long arrayLength;
    unsigned long long access;
    unsigned long long textureType;
    unsigned long long constantBlockAlignment;
};

struct MTLAttributeFlags {
    union {
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :5;
        } _field1;
        unsigned char _field2;
    } _field1;
};

struct MTLCompilerCache {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
    int _field4;
};

struct MTLCompilerConnectionManager {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
};

struct MTLComputePipelineDescriptorPrivate {
    NSString *label;
    id computeFunction;
    char threadGroupSizeIsMultipleOfThreadExecutionWidth;
    MTLStageInputOutputDescriptor *stageInputDescriptor;
    MTLPipelineBufferDescriptorArrayInternal *buffers;
};

struct MTLConstantStorage {
    struct map<std::__1::basic_string<char>, MTLConstantStorage::ConstantData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLConstantStorage::ConstantData>>> _field1;
    struct map<unsigned short, MTLConstantStorage::ConstantData, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, MTLConstantStorage::ConstantData>>> _field2;
};

struct MTLDepthStencilDescriptorPrivate {
    MTLStencilDescriptorInternal *frontFaceStencil;
    MTLStencilDescriptorInternal *backFaceStencil;
    unsigned long long depthCompareFunction;
    char depthWriteEnabled;
    NSString *label;
};

struct MTLDispatch {
    struct MTLDispatch *_field1;
    CDUnknownBlockType _field2;
};

struct MTLFunctionData {
    unsigned long long bitCodeOffset;
    unsigned long long bitCodeFileSize;
    unsigned long long publicArgumentsOffset;
    unsigned long long privateArgumentsOffset;
    unsigned short airMajorVersion;
    unsigned short airMinorVersion;
    unsigned short languageMajorVersion;
    unsigned short languageMinorVersion;
    CDStruct_41a22ec7 bitcodeHash;
    unsigned char bitcodeType;
    unsigned char renderTargetArrayIndexType;
    unsigned int patchType:2;
    unsigned int controlPointCount:6;
};

struct MTLHeapDescriptorPrivate {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct MTLIOAccelBufferHeap {
    MTLIOAccelBuffer *buffers[64];
    struct MTLRangeAllocator allocators[64];
    unsigned int count;
};

struct MTLIOAccelCommandBufferResourceInfo {
    unsigned long long _field1;
    unsigned int *_field2;
    unsigned int *_field3;
    unsigned int *_field4;
    id _field5;
    struct IOAccelResourceInfo _field6;
};

struct MTLIOAccelCommandBufferStorage {
    id _field1;
    struct MTLIOAccelCommandBufferStoragePool *_field2;
    struct {
        struct MTLIOAccelCommandBufferStorage *_field1;
        struct MTLIOAccelCommandBufferStorage **_field2;
    } _field3;
    id _field4;
    char *_field5;
    char *_field6;
    char *_field7;
    id _field8;
    char *_field9;
    char *_field10;
    struct IOAccelSegmentListHeader *_field11;
    struct IOAccelSegmentResourceListHeader *_field12;
    struct IOAccelSegmentResourceDescriptorGroup *_field13;
    struct IOAccelResourceList _field14;
    id _field15;
    id _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    id *_field19;
    struct MTLIOAccelCommandBufferResourceInfo *_field20;
    id _field21;
    id *_field22;
    unsigned int _field23;
};

struct MTLIOAccelCommandBufferStoragePool {
    struct storageQueue _field1;
    struct os_unfair_lock_s _field2;
    int _field3;
    int _field4;
    id _field5;
};

struct MTLLibraryBuilder {
    id _field1;
    struct map<MTLLibraryIdentifier, MTLLibraryContainer *, std::__1::less<MTLLibraryIdentifier>, std::__1::allocator<std::__1::pair<const MTLLibraryIdentifier, MTLLibraryContainer *>>> _field2;
    id _field3;
};

struct MTLLibraryContainer {
    int _field1;
    CDStruct_41a22ec7 _field2;
    struct MTLLibraryData *_field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
};

struct MTLLibraryData {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    id _field3;
    id _field4;
};

struct MTLPipelineBufferDescriptorPrivate {
    union {
        struct {
            unsigned int mutability:2;
        } ;
        CDStruct_914d909e ;
    } ;
};

struct MTLProgramObject {
    struct VariantList<4> _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
};

struct MTLRangeAllocator {
    struct MTLRangeAllocatorElement *elements;
    unsigned int numElements;
    unsigned int capacity;
    unsigned int capacityIncrement;
    unsigned int defaultAlignmentMask;
};

struct MTLRangeAllocatorElement;

struct MTLRenderPassAttachmentDescriptorPrivate {
    id texture;
    unsigned long long level;
    unsigned long long slice;
    unsigned long long depthPlane;
    unsigned long long loadAction;
    unsigned long long storeAction;
    unsigned long long storeActionOptions;
    CDStruct_3ead2808 clearColor;
    double clearDepth;
    unsigned int clearStencil;
    id resolveTexture;
    unsigned long long resolveLevel;
    unsigned long long resolveSlice;
    unsigned long long resolveDepthPlane;
    unsigned long long width;
    unsigned long long height;
};

struct MTLRenderPassDescriptorPrivate {
    MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments;
    id visibilityResultBuffer;
    unsigned long long renderTargetWidth;
    unsigned long long renderTargetHeight;
    char ditherEnabled;
    unsigned long long renderTargetArrayLength;
    CDStruct_6e3f967a customSamplePositions[8];
    unsigned long long numCustomSamplePositions;
};

struct MTLRenderPipelineAttachmentDescriptorPrivate {
    union {
        struct {
            unsigned int blendingEnabled:1;
            unsigned int rgbBlendOperation:3;
            unsigned int alphaBlendOperation:3;
            unsigned int sourceRGBBlendFactor:5;
            unsigned int sourceAlphaBlendFactor:5;
            unsigned int destinationRGBBlendFactor:5;
            unsigned int destinationAlphaBlendFactor:5;
            unsigned int writeMask:4;
            unsigned int logicOpEnabled:1;
            unsigned int logicOp:4;
            unsigned int pixelFormat:28;
        } ;
        CDStruct_914d909e ;
    } ;
};

struct MTLRenderPipelineDescriptorPrivate {
    MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments;
    unsigned long long rtBlendDescHash[8];
    unsigned long long depthAttachmentPixelFormat;
    unsigned long long stencilAttachmentPixelFormat;
    unsigned long long tessellationPartitionMode;
    unsigned long long maxTessellationFactor;
    char tessellationFactorScaleEnabled;
    unsigned long long tessellationFactorFormat;
    unsigned long long tessellationControlPointIndexType;
    unsigned long long tessellationFactorStepFunction;
    unsigned long long tessellationOutputWindingOrder;
    unsigned long long postVertexDumpBufferIndex;
    union {
        unsigned long long sampleCount;
        unsigned long long rasterSampleCount;
    } ;
    unsigned long long sampleMask;
    union {
        unsigned int sampleCoverageHash;
        float sampleCoverage;
    } ;
    union {
        unsigned int miscHash;
        struct {
            unsigned int alphaToCoverageEnabled:1;
            unsigned int alphaToOneEnabled:1;
            unsigned int rasterizationEnabled:1;
            unsigned int inputPrimitiveTopology:2;
            unsigned int private0:1;
            unsigned int private1:1;
            unsigned int private2:1;
            unsigned int private3:1;
            unsigned int private4:1;
            unsigned int private5:1;
            unsigned int pad:3;
            unsigned int pointSmoothEnabled:1;
            unsigned int clipDistanceEnableMask:8;
            unsigned int alphaTestFunc:3;
            unsigned int alphaTestEnabled:1;
            unsigned int logicOp:4;
            unsigned int logicOpEnabled:1;
        } ;
    } ;
    NSString *label;
    id vertexFunction;
    id fragmentFunction;
    MTLVertexDescriptorInternal *vertexDescriptor;
    MTLPipelineBufferDescriptorArrayInternal *vertexBuffers;
    MTLPipelineBufferDescriptorArrayInternal *fragmentBuffers;
};

struct MTLResourceListEntry;

struct MTLSamplerDescriptorPrivate {
    union {
        struct {
            unsigned int minFilter:2;
            unsigned int magFilter:2;
            unsigned int mipFilter:2;
            unsigned int sAddressMode:3;
            unsigned int tAddressMode:3;
            unsigned int rAddressMode:3;
            unsigned int normalizedCoords:1;
            unsigned int borderColor:2;
            unsigned int compareFunction:3;
            unsigned int supportArgumentBuffers:1;
        } ;
        unsigned int miscHash;
    } ;
    union {
        unsigned int lodMinClampHash;
        float lodMinClamp;
    } ;
    union {
        unsigned int lodMaxClampHash;
        float lodMaxClamp;
    } ;
    union {
        unsigned int lodBiasHash;
        float lodBias;
    } ;
    unsigned long long maxAnisotropy;
    NSString *label;
};

struct MTLStatSampleRec {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3[0];
};

struct MTLStencilDescriptorPrivate {
    unsigned long long stencilCompareFunction;
    unsigned long long stencilFailureOperation;
    unsigned long long depthFailureOperation;
    unsigned long long depthStencilPassOperation;
    unsigned int readMask;
    unsigned int writeMask;
};

struct MTLTargetDeviceArch {
    unsigned int _field1;
    unsigned int _field2;
    char *_field3;
};

struct MTLTextureDescriptorPrivate {
    unsigned long long textureType;
    unsigned long long pixelFormat;
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
    unsigned long long mipmapLevelCount;
    unsigned long long sampleCount;
    unsigned long long arrayLength;
    char zeroFill;
    char framebufferOnly;
    char isDrawable;
    union {
        unsigned long long textureUsage;
        unsigned long long usage;
    } ;
    unsigned long long cpuCacheMode;
    unsigned long long storageMode;
    unsigned long long resourceOptions;
    unsigned long long resolvedUsage;
};

struct MTLVRTextureBounds {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct NSObject {
    Class _field1;
};

struct VariantEntry {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    id _field5;
    id _field6;
    unsigned long long _field7;
    id _field8;
};

struct VariantList<4> {
    struct Chunk _field1;
    struct Chunk *_field2;
    unsigned int _field3;
    struct VariantEntry _field4;
};

struct _MTLIOAccelDeviceShmemPoolPrivate {
    struct shmemPoolQueue queue;
    struct os_unfair_lock_s lock;
    int count;
    Class shmemClass;
    MTLIOAccelDevice *device;
    unsigned int shmemSize;
};

struct _MTLIOAccelDeviceShmemPrivate {
    MTLIOAccelDeviceShmemPool *pool;
    struct {
        MTLIOAccelDeviceShmem *tqe_next;
        id *tqe_prev;
    } entry;
    unsigned long long time_added;
};

struct _MTLIOAccelResource {
    union {
        unsigned long long reserved[4];
    } vendor;
    struct IOAccelResourceInfo info;
    unsigned long long sharedAllocationUniqueId;
    unsigned long long cachedAllocationUniqueId;
    unsigned long long gpuAddress;
    MTLIOAccelDevice *device;
    NSString *label;
    unsigned long long globalTraceObjectID;
    unsigned long long labelTraceID;
    struct __IOAccelResource *resourceRef;
    struct IOAccelClientSharedRO *clientSharedRO;
    struct IOAccelClientSharedRW *clientSharedRW;
    void *virtualAddress;
    unsigned long long options;
    unsigned long long storageMode;
    unsigned long long cpuCacheMode;
    int responsibleProcess;
    unsigned long long purgeableState;
    char purgeableAllowed;
    MTLResourceAllocationInfo *sharedAllocationInfo;
    MTLResourceAllocationInfo *cachedAllocationInfo;
    MTLIOAccelHeap *heap;
    MTLIOAccelResource *resource;
    unsigned int offset;
    unsigned int length;
    char pinned;
};

struct _MTLIOAccelResourcePoolPrivate {
    struct resourceQueue queue;
    struct os_unfair_lock_s lock;
    int count;
};

struct _MTLIOAccelResourcePrivate {
    MTLIOAccelResourcePool *pool;
    struct {
        MTLIOAccelPooledResource *tqe_next;
        id *tqe_prev;
    } entry;
    unsigned long long time_added;
    unsigned int pool_generation;
};

struct _MTLIndirectArgumentBufferLayoutPrivate {
    id _field1;
    struct unordered_map<unsigned long, _MTLIndirectArgumentBufferLayout *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, _MTLIndirectArgumentBufferLayout *>>> _field2;
};

struct _MTLResourceListPoolPrivate {
    struct resourceListQueue queue;
    struct os_unfair_lock_s lock;
    int count;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*> *_field1;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct map<MTLLibraryIdentifier, MTLLibraryContainer *, std::__1::less<MTLLibraryIdentifier>, std::__1::allocator<std::__1::pair<const MTLLibraryIdentifier, MTLLibraryContainer *>>> {
    struct __tree<std::__1::__value_type<MTLLibraryIdentifier, MTLLibraryContainer *>, std::__1::__map_value_compare<MTLLibraryIdentifier, std::__1::__value_type<MTLLibraryIdentifier, MTLLibraryContainer *>, std::__1::less<MTLLibraryIdentifier>, true>, std::__1::allocator<std::__1::__value_type<MTLLibraryIdentifier, MTLLibraryContainer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MTLLibraryIdentifier, MTLLibraryContainer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MTLLibraryIdentifier, std::__1::__value_type<MTLLibraryIdentifier, MTLLibraryContainer *>, std::__1::less<MTLLibraryIdentifier>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, MTLConstantStorage::ConstantData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLConstantStorage::ConstantData>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned short, MTLConstantStorage::ConstantData, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, MTLConstantStorage::ConstantData>>> {
    struct __tree<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, MTLConstantStorage::ConstantData>, std::__1::less<unsigned short>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct resourceListQueue {
    MTLResourceList *tqh_first;
    id *tqh_last;
};

struct resourceQueue {
    MTLIOAccelPooledResource *tqh_first;
    id *tqh_last;
};

struct shmemPoolQueue {
    MTLIOAccelDeviceShmem *tqh_first;
    id *tqh_last;
};

struct storageQueue {
    struct MTLIOAccelCommandBufferStorage *_field1;
    struct MTLIOAccelCommandBufferStorage **_field2;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<unsigned long, _MTLIndirectArgumentBufferLayout *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, _MTLIndirectArgumentBufferLayout *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::hash<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::equal_to<unsigned long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    CDUnknownBlockType _field1;
    CDUnknownBlockType _field2;
    CDUnknownBlockType _field3;
    CDUnknownBlockType _field4;
} CDStruct_14783bb7;

typedef struct {
    unsigned int maxColorAttachments;
    unsigned int maxVertexAttributes;
    unsigned int maxVertexBuffers;
    unsigned int maxVertexTextures;
    unsigned int maxVertexSamplers;
    unsigned int maxVertexInlineDataSize;
    unsigned int maxInterpolants;
    unsigned int maxFragmentBuffers;
    unsigned int maxFragmentTextures;
    unsigned int maxFragmentSamplers;
    unsigned int maxFragmentInlineDataSize;
    unsigned int maxComputeBuffers;
    unsigned int maxComputeTextures;
    unsigned int maxComputeSamplers;
    unsigned int maxComputeInlineDataSize;
    unsigned int maxComputeLocalMemorySizes;
    unsigned int maxTotalComputeThreadsPerThreadgroup;
    unsigned int maxComputeThreadgroupMemory;
    float maxLineWidth;
    float maxPointSize;
    unsigned int maxVisibilityQueryOffset;
    unsigned int maxBufferLength;
    unsigned int minConstantBufferAlignmentBytes;
    unsigned int minBufferNoCopyAlignmentBytes;
    unsigned int maxTextureWidth1D;
    unsigned int maxTextureWidth2D;
    unsigned int maxTextureHeight2D;
    unsigned int maxTextureWidth3D;
    unsigned int maxTextureHeight3D;
    unsigned int maxTextureDepth3D;
    unsigned int maxTextureDimensionCube;
    unsigned int maxTextureLayers;
    unsigned int linearTextureAlignmentBytes;
    unsigned int iosurfaceTextureAlignmentBytes;
    unsigned int iosurfaceReadOnlyTextureAlignmentBytes;
    unsigned int deviceLinearTextureAlignmentBytes;
    unsigned int deviceLinearReadOnlyTextureAlignmentBytes;
    unsigned int maxFunctionConstantIndices;
    unsigned int maxComputeThreadgroupMemoryAlignmentBytes;
    unsigned int maxInterpolatedComponents;
    unsigned int maxTessellationFactor;
    unsigned int maxViewportCount;
    unsigned int maxCustomSamplePositions;
} CDStruct_b3e7dfa1;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long bits;
} CDStruct_914d909e;

typedef struct {
    unsigned char key[32];
} CDStruct_41a22ec7;

typedef struct {
    unsigned int fragmentUsesDiscard:1;
    unsigned int fragmentWritesSampleMask:1;
    unsigned int fragmentWritesDepth:1;
    unsigned int vertexRegisterSpill:1;
    unsigned int fragmentRegisterSpill:1;
    unsigned int fragmentReadsFramebufferValues:1;
    unsigned int private0:1;
    unsigned int private1:1;
    unsigned int private2:1;
    unsigned int reserved:55;
} CDStruct_6b0207e2;

typedef struct {
    unsigned int kernelRegisterSpill:1;
    unsigned int threadgroupBarrier:1;
    unsigned int deviceMemoryAtomics:1;
    unsigned int threadgroupMemoryAtomics:1;
    unsigned int reserved:60;
} CDStruct_596dc0d1;

typedef struct {
    unsigned int :8;
    unsigned int :24;
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_4af8c268;

typedef struct {
    double red;
    double green;
    double blue;
    double alpha;
} CDStruct_3ead2808;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

