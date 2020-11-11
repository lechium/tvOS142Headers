/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	[4 columns];
} SCD_Struct_MD1;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> > {
	BidirectionalScatteringDistributionFunction __value_;
} compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> >;

typedef struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> > {
	compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> > __ptr_;
} unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> >;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_MD5;

typedef struct _compressed_pair<GroupData *, std::__1::allocator<GroupData> > {
	GroupData __value_;
} compressed_pair<GroupData *, std::__1::allocator<GroupData> >;

typedef struct vector<GroupData, std::__1::allocator<GroupData> > {
	GroupData __begin_;
	GroupData __end_;
	compressed_pair<GroupData *, std::__1::allocator<GroupData> > __end_cap_;
} vector<GroupData, std::__1::allocator<GroupData> >;

typedef struct _compressed_pair<std::__1::array<float, 4> *, std::__1::allocator<std::__1::array<float, 4> > > {
	array<float, 4> __value_;
} compressed_pair<std::__1::array<float, 4> *, std::__1::allocator<std::__1::array<float, 4> > >;

typedef struct vector<std::__1::array<float, 4>, std::__1::allocator<std::__1::array<float, 4> > > {
	array<float, 4> __begin_;
	array<float, 4> __end_;
	compressed_pair<std::__1::array<float, 4> *, std::__1::allocator<std::__1::array<float, 4> > > __end_cap_;
} vector<std::__1::array<float, 4>, std::__1::allocator<std::__1::array<float, 4> > >;

typedef struct _compressed_pair<std::__1::array<float, 3> *, std::__1::allocator<std::__1::array<float, 3> > > {
	array<float, 3> __value_;
} compressed_pair<std::__1::array<float, 3> *, std::__1::allocator<std::__1::array<float, 3> > >;

typedef struct vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > > {
	array<float, 3> __begin_;
	array<float, 3> __end_;
	compressed_pair<std::__1::array<float, 3> *, std::__1::allocator<std::__1::array<float, 3> > > __end_cap_;
} vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > >;

typedef struct _compressed_pair<std::__1::array<float, 2> *, std::__1::allocator<std::__1::array<float, 2> > > {
	array<float, 2> __value_;
} compressed_pair<std::__1::array<float, 2> *, std::__1::allocator<std::__1::array<float, 2> > >;

typedef struct vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > > {
	array<float, 2> __begin_;
	array<float, 2> __end_;
	compressed_pair<std::__1::array<float, 2> *, std::__1::allocator<std::__1::array<float, 2> > > __end_cap_;
} vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > >;

typedef struct AssetData {
	NSString* name;
	vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > > positions;
	vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > > texcoords;
	vector<std::__1::array<float, 2>, std::__1::allocator<std::__1::array<float, 2> > > texcoords2;
	vector<std::__1::array<float, 3>, std::__1::allocator<std::__1::array<float, 3> > > normals;
	vector<std::__1::array<float, 4>, std::__1::allocator<std::__1::array<float, 4> > > colors;
	NSMutableArray* materials;
	vector<GroupData, std::__1::allocator<GroupData> > groups;
} AssetData;

typedef struct MDLAABB* MDLAABBRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree> > {
	SCNOctree __value_;
} compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree> >;

typedef struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree> > {
	compressed_pair<ModelIO::SCNOctree *, std::__1::default_delete<ModelIO::SCNOctree> > __ptr_;
} unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >;

typedef struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > > __table_;
} unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > >;

typedef struct {
	 minimumExtent;
	 maximumExtent;
} SCD_Struct_MD29;

typedef struct _compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> >;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > __end_cap_;
} vector<unsigned long long, std::__1::allocator<unsigned long long> >;

typedef struct MortonCode {
	vector<unsigned long long, std::__1::allocator<unsigned long long> > mortonkeyX;
	vector<unsigned long long, std::__1::allocator<unsigned long long> > mortonkeyY;
	vector<unsigned long long, std::__1::allocator<unsigned long long> > mortonkeyZ;
} MortonCode;

typedef struct _compressed_pair<ModelIO::Octree *, std::__1::default_delete<ModelIO::Octree> > {
	Octree __value_;
} compressed_pair<ModelIO::Octree *, std::__1::default_delete<ModelIO::Octree> >;

typedef struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree> > {
	compressed_pair<ModelIO::Octree *, std::__1::default_delete<ModelIO::Octree> > __ptr_;
} unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree> >;

typedef struct type {
	unsigned char __lx[8];
} type;

typedef struct TfPointerAndBits<const VtValue::_TypeInfo> {
	_TypeInfo _ptrAndBits;
} TfPointerAndBits<const VtValue::_TypeInfo>;

typedef struct VtValue {
	type _storage;
	TfPointerAndBits<const VtValue::_TypeInfo> _info;
} VtValue;

typedef struct _compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> > {
	TimeSampledVtValue __value_;
} compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> >;

typedef struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> > {
	TimeSampledVtValue __begin_;
	TimeSampledVtValue __end_;
	compressed_pair<(anonymous namespace)::TimeSampledVtValue *, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> > __end_cap_;
} vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> >;

typedef struct _compressed_pair<ModelIO::RTRenderable **, std::__1::allocator<ModelIO::RTRenderable *> > {
	RTRenderable __value_;
} compressed_pair<ModelIO::RTRenderable **, std::__1::allocator<ModelIO::RTRenderable *> >;

typedef struct vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> > {
	RTRenderable __begin_;
	RTRenderable __end_;
	compressed_pair<ModelIO::RTRenderable **, std::__1::allocator<ModelIO::RTRenderable *> > __end_cap_;
} vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >;

typedef struct _compressed_pair<MDLLight *__strong *, std::__1::allocator<MDLLight *> > {
	id __value_;
} compressed_pair<MDLLight *__strong *, std::__1::allocator<MDLLight *> >;

typedef struct vector<MDLLight *, std::__1::allocator<MDLLight *> > {
	id __begin_;
	id __end_;
	compressed_pair<MDLLight *__strong *, std::__1::allocator<MDLLight *> > __end_cap_;
} vector<MDLLight *, std::__1::allocator<MDLLight *> >;

typedef struct float4x4 {
	[4 columns];
} float4x4;

typedef struct _compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > {
	pair<double, float __attribute__((ext_vector_type(3)))> __value_;
} compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >;

typedef struct vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > {
	pair<double, float __attribute__((ext_vector_type(3)))> __begin_;
	pair<double, float __attribute__((ext_vector_type(3)))> __end_;
	compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > __end_cap_;
} vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >;

typedef struct MDLAffineTransform {
	vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > _keyedTranslation;
	vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > _keyedRotation;
	vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > _keyedShear;
	vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > > _keyedScale;
	double _startTime;
	double _greatestTime;
	BOOL _identity;
	BOOL _resetTransformStack;
	double _evaluationTime;
	float4x4 _transform;
	float4x4 _invTransform;
	float4x4 _jacobiRotation;
	float4x4 _invJacobiRotation;
} MDLAffineTransform;

typedef struct MDLTextureData {
	char* topLeftBytesForMip[16];
	char* bottomLeftBytesForMip[16];
	int channelCount;
	 dimensions;
	unsigned long long rowStride;
	BOOL isCube;
} MDLTextureData;

typedef struct __CFString* CFStringRef;

typedef struct CGImage* CGImageRef;

