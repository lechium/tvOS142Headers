/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/VMUCommonGraphInterface.h>

@class VMUClassInfoMap, NSString, VMUTaskMemoryCache, VMUObjectIdentifier, VMUVMRegionIdentifier, VMURangeArray, NSMutableArray, NSMutableDictionary, VMUTaskThreadStates, NSMutableSet, VMUDebugTimer, VMUProcessObjectGraph;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface> {

	unsigned _task;
	int _pid;
	unsigned long long _suspendTime;
	unsigned long long _suspendTimeContinuous;
	unsigned _suspensionToken;
	VMUTaskMemoryCache* _memoryCache;
	VMUObjectIdentifier* _objectIdentifier;
	VMUVMRegionIdentifier* _regionIdentifier;
	VMUBlockNode* _blocks;
	unsigned _blocksCount;
	unsigned _blocksSize;
	VMURegionNode* _regions;
	unsigned _regionsCount;
	VMURegionMap* _regionMap;
	VMURangeArray* _stackRanges;
	NSMutableArray* _zoneNames;
	VMURange _dataSegmentsRangeInSharedCache;
	VMURange _dataSegmentsRangeOutsideSharedCache;
	VMURangeArray* _dataSegmentsRangeArrayOutsideSharedCache;
	BOOL _recordRuntimeMetadataChunkInfo;
	NSMutableDictionary* _addressToRuntimeMetadataChunkInfoDict;
	VMUZoneNode* _zones;
	unsigned _zonesCount;
	unsigned _zonesSize;
	VMUTaskThreadStates* _threadStates;
	unsigned _threadsCount;
	VMUInstanceValues* _instanceValues;
	unsigned _instanceValuesCount;
	unsigned _instanceValuesSize;
	id* _classInfos;
	unsigned _classInfosCount;
	VMUClassInfoMap* _classInfoIndexer;
	VMUScanLocationCache* _scanCaches;
	unsigned _autoreleasePoolBoundaryNode;
	unsigned _recordAutoreleasePoolBoundaries;
	NSMutableSet* _methodCacheBucketPtrAddresses;
	unsigned _objcClassStructureClassInfoIndex;
	unsigned _swiftClassStructureClassInfoIndex;
	unsigned _swiftMetadataClassInfoIndex;
	unsigned _swiftHeapGenericLocalVariableClassInfoIndex;
	BOOL _exactScanningEnabled;
	unsigned long long _maxInteriorOffset;
	unsigned _scanningMask;
	VMUDebugTimer* _debugTimer;
	BOOL _showRawClassNames;
	NSString* _processName;
	NSString* _processDescriptionString;
	NSString* _executablePath;
	NSString* _binaryImagesDescription;
	unsigned long long _physicalFootprint;
	unsigned long long _physicalFootprintPeak;
	unsigned long long _regionDescriptionOptions;
	/*^block*/id _referenceLogger;
	/*^block*/id _nodeLogger;
	BOOL _abandonedMarkingEnabled;
	VMUProcessObjectGraph* _processObjectGraph;
	void* _userMarkedAbandoned;
	NSMutableDictionary* _variantCachesByIsaIndex;
	NSMutableDictionary* _srcAddressToExtraAutoreleaseCountDict;
	unsigned long long _cfPasteboardReservedBase;

}

@property (nonatomic,readonly) unsigned long long suspendTimeContinuous;              //@synthesize suspendTimeContinuous=_suspendTimeContinuous - In the implementation block
@property (nonatomic,readonly) VMUTaskMemoryCache * memoryCache;                      //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,readonly) VMUObjectIdentifier * objectIdentifier;                //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (assign,nonatomic) BOOL exactScanningEnabled;                               //@synthesize exactScanningEnabled=_exactScanningEnabled - In the implementation block
@property (assign,nonatomic) BOOL abandonedMarkingEnabled;                            //@synthesize abandonedMarkingEnabled=_abandonedMarkingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxInteriorOffset;                    //@synthesize maxInteriorOffset=_maxInteriorOffset - In the implementation block
@property (assign,nonatomic) unsigned scanningMask;                                   //@synthesize scanningMask=_scanningMask - In the implementation block
@property (nonatomic,retain) VMUDebugTimer * debugTimer;                              //@synthesize debugTimer=_debugTimer - In the implementation block
@property (assign,nonatomic) BOOL showRawClassNames;                                  //@synthesize showRawClassNames=_showRawClassNames - In the implementation block
@property (assign,nonatomic) unsigned objectContentLevel; 
@property (assign,nonatomic) BOOL recordRuntimeMetadataChunkInfo;                     //@synthesize recordRuntimeMetadataChunkInfo=_recordRuntimeMetadataChunkInfo - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount;                                    //@synthesize blocksCount=_blocksCount - In the implementation block
@property (nonatomic,readonly) unsigned zoneCount;                                    //@synthesize zonesCount=_zonesCount - In the implementation block
@property (nonatomic,readonly) unsigned mallocNodeCount; 
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (nonatomic,readonly) unsigned task;                                         //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) int pid;                                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BOOL is64bit; 
@property (nonatomic,readonly) unsigned vmPageSize; 
@property (nonatomic,readonly) unsigned kernelPageSize; 
@property (nonatomic,readonly) unsigned regionCount;                                  //@synthesize regionsCount=_regionsCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
@property (nonatomic,readonly) NSString * processName;                                //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * processDescriptionString;                   //@synthesize processDescriptionString=_processDescriptionString - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                             //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * binaryImagesDescription;                    //@synthesize binaryImagesDescription=_binaryImagesDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalFootprint;                  //@synthesize physicalFootprint=_physicalFootprint - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalFootprintPeak;              //@synthesize physicalFootprintPeak=_physicalFootprintPeak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)nodeDescription:(SCD_Struct_VM2)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3 ;
+(id)referenceDescription:(SCD_Struct_VM3)arg1 withSourceNode:(SCD_Struct_VM2)arg2 destinationNode:(SCD_Struct_VM2)arg3 sortedVMRegions:(id)arg4 symbolicator:(CSTypeRef)arg5 alignmentSpacing:(unsigned)arg6 ;
-(void)dealloc;
-(BOOL)_suspend;
-(id)initWithTask:(unsigned)arg1 ;
-(NSString *)executablePath;
-(NSString *)processName;
-(int)pid;
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(VMUObjectIdentifier *)objectIdentifier;
-(VMUTaskMemoryCache *)memoryCache;
-(unsigned)task;
-(NSString *)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(void)mapDyldSharedCacheFromTargetWithRegions:(id)arg1 ;
-(VMUClassInfoMap *)realizedClasses;
-(void)refineTypesWithOverlay:(id)arg1 ;
-(id)_initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(void)setNodeScanningLogger:(/*^block*/id)arg1 ;
-(void)setReferenceScanningLogger:(/*^block*/id)arg1 ;
-(void)detachFromTask;
-(void)_destroyLinearClassInfos;
-(void)_withMemoryReaderBlock:(/*^block*/id)arg1 ;
-(void)_addThreadNodesFromTask;
-(void)_addSpecialNodesFromTask;
-(void)_callRemoteMallocEnumerators:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)objectContentLevel;
-(id)_readonlyRegionRanges;
-(void)setObjectContentLevel:(unsigned)arg1 ;
-(void)_sortAndClassifyBlocks;
-(void)_sortBlocks;
-(void)_buildRegionPageBlockMaps;
-(void)_fixupBlockIsas;
-(void)_findMarkedAbandonedBlocks;
-(unsigned)nodeForAddress:(unsigned long long)arg1 ;
-(void)_withOrderedNodeMapper:(/*^block*/id)arg1 ;
-(void)_updateLinearClassInfos;
-(void)_identifyNonObjectsPointedToByTypedIvars:(unsigned)arg1 ;
-(void)_identifyObjCClassStructureBlocks;
-(void)_identifyNonObjectsPointingToSwiftMetadata:(unsigned)arg1 ;
-(unsigned)nodeNamespaceSize;
-(void)_orderedScanWithScanner:(/*^block*/id)arg1 recorder:(/*^block*/id)arg2 keepMapped:(BOOL)arg3 actions:(/*^block*/id)arg4 ;
-(void)_withScanningContext:(/*^block*/id)arg1 ;
-(unsigned)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned*)arg1 nodeCount:(unsigned)arg2 recorder:(/*^block*/id)arg3 ;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 ;
-(id)processSnapshotGraphWithOptions:(unsigned long long)arg1 ;
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(void)setShowRawClassNames:(BOOL)arg1 ;
-(id)labelForNode:(unsigned)arg1 ;
-(void)scanNodesForReferences:(/*^block*/id)arg1 ;
-(void)unmapAllRegions;
-(id)processSnapshotGraphWithMallocStackLogs:(BOOL)arg1 ;
-(SCD_Struct_VM2)nodeDetails:(unsigned)arg1 ;
-(id)vmuVMRegionForAddress:(unsigned long long)arg1 ;
-(void*)contentForNode:(unsigned)arg1 ;
-(void*)copyUserMarked;
-(id)zoneNameForIndex:(unsigned)arg1 ;
-(id)vmuVMRegionForNode:(unsigned)arg1 ;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasLabelsForNodes;
-(id)shortLabelForNode:(unsigned)arg1 ;
-(BOOL)is64bit;
-(unsigned)vmPageSize;
-(unsigned)kernelPageSize;
-(unsigned)zoneCount;
-(unsigned)regionCount;
-(unsigned)nodeCount;
-(NSString *)processDescriptionString;
-(id)initWithSelfTaskAndOptions:(unsigned long long)arg1 ;
-(unsigned)_indexForClassInfo:(id)arg1 ;
-(id)_cachedVariantForGenericInfo:(id)arg1 variantKey:(unsigned long long)arg2 ;
-(void)_registerVariant:(id)arg1 forGenericInfo:(id)arg2 variantKey:(unsigned long long)arg3 ;
-(void)addRootNodesFromTask;
-(void)addMallocNodesFromTask;
-(void)addMallocNodes:(id)arg1 ;
-(void)printRuntimeMetadataInfo;
-(void)orderedNodeTraversal:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)removeRootReachableNodes;
-(id)processSnapshotGraph;
-(id)zoneNameForNode:(unsigned)arg1 ;
-(unsigned)mallocNodeCount;
-(id)classInfoForObjectAtAddress:(unsigned long long)arg1 ;
-(BOOL)validateAddressRange:(VMURange)arg1 ;
-(BOOL)addressIsInDataSegment:(unsigned long long)arg1 ;
-(unsigned)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)nodeDescription:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 ;
-(id)referenceDescription:(SCD_Struct_VM3)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 symbolicator:(CSTypeRef)arg4 alignmentSpacing:(unsigned)arg5 ;
-(unsigned long long)maxInteriorOffset;
-(void)setMaxInteriorOffset:(unsigned long long)arg1 ;
-(BOOL)exactScanningEnabled;
-(void)setExactScanningEnabled:(BOOL)arg1 ;
-(unsigned)scanningMask;
-(void)setScanningMask:(unsigned)arg1 ;
-(BOOL)abandonedMarkingEnabled;
-(void)setAbandonedMarkingEnabled:(BOOL)arg1 ;
-(VMUDebugTimer *)debugTimer;
-(BOOL)showRawClassNames;
-(BOOL)recordRuntimeMetadataChunkInfo;
-(void)setRecordRuntimeMetadataChunkInfo:(BOOL)arg1 ;
-(unsigned long long)suspendTimeContinuous;
@end

