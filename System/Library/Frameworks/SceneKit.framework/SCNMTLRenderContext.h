/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNBufferStream.h>

@protocol MTLDevice, MTLCommandQueue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, MTLCommandBuffer, MTLDepthStencilState, MTLSamplerState, OS_dispatch_queue, OS_dispatch_group, MTLBuffer, MTLRenderCommandEncoder;
@class SCNMTLResourceManager, NSObject, CAMetalLayer, MTLRenderPassDescriptor, NSMutableArray, SCNMTLRenderPipeline, NSString, NSMutableDictionary;

@interface SCNMTLRenderContext : NSObject <SCNBufferStream> {

	long long _currentFrameIndex;
	_C3DEngineStats* __engineStats;
	double _superSamplingFactor;
	SCNMatrix4 _screenTransform;
	long long _sampleCount;
	BOOL _needSuperSampling;
	SCNMTLResourceManager* _resourceManager;
	id<MTLDevice> _device;
	BOOL _isValidationEnabled;
	int _profile;
	unsigned _features;
	C3DEngineContextRef _engineContext;
	unsigned _wantsWideGamut : 1;
	unsigned _isOpaque : 1;
	unsigned _disableLinearRendering : 1;
	unsigned _useFunctionConstants : 1;
	unsigned _reverseZ : 1;
	id<MTLCommandQueue> _ownedCommandQueue;
	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	atomic<int> _pendingGPUFrameCount;
	id<MTLTexture> _textureTarget;
	CAMetalLayer* _layerTarget;
	id<CAMetalDrawable> _drawable;
	float _targetedFrameInterval;
	BOOL _shouldPresentAfterMinimumDuration;
	BOOL _shouldPresentWithTransaction;
	MTLRenderPassDescriptor* _currentRenderPassDescriptor;
	MTLRenderPassDescriptor* _originalRenderPassDescriptor;
	 _renderSize;
	id<MTLCommandBuffer> _currentCommandBuffer;
	SCNMTLRenderCommandEncoder* _renderEncoder;
	id<MTLCommandBuffer> _resourceCommandBuffer;
	SCNMTLBlitCommandEncoder _resourceBlitEncoder;
	SCNMTLComputeCommandEncoder* _resourceComputeEncoder;
	SCD_Struct_SC54 _renderPassParameters;
	SCD_Struct_SC55 _currentStreamBufferIndices;
	SCNMTLBufferPool* _volatileBufferPools[3];
	SCNMTLBufferPool* _frameVolatileBufferPool;
	NSMutableArray* _volatileMeshes;
	NSMutableArray* _bufferPool;
	NSMutableArray* _usedVolatileMeshElements;
	NSMutableArray* _freeVolatileMeshElements;
	SCNMTLBufferPool* _constantBufferPools[3];
	SCNMTLBufferPool* _frameConstantBufferPool;
	SCNMTLTexturePool* _frameTexturePool;
	id<MTLDepthStencilState> _defaultDepthStencilState;
	id<MTLSamplerState> _defaultSamplerState;
	_C3DFXMetalProgram* _background2DProgram[3];
	_C3DFXMetalProgram* _backgroundCubeProgram[3];
	_C3DFXMetalProgram* _backgroundVideoProgram;
	C3DRasterizerStatesRef _backgroundRasterizerStates;
	double _initialTime;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSObject*<OS_dispatch_group> _resourceGroup;
	id<MTLBuffer> _shadowKernelBuffer;
	SCD_Struct_SC56* _processingContext;
	unsigned _seed;
	SCNSceneBuffer _frameUniforms[6];
	SCD_Struct_SC59 _sceneUniforms;
	SCD_Struct_SC60 _lightsData;
	SCD_Struct_SC62* _nodeUniforms;
	SCD_Struct_SC77* _lighting;
	Cache* _cache;
	SCD_Struct_SC79* _deferredRendering;
	SCD_Struct_SC80 _compositeRendering[2];
	SCNMTLRenderPipeline* _downSamplePipeline;
	SCD_Struct_SC81 _skCompositing;
	SCD_Struct_SC82 _debug;
	BOOL _showsAuthoringEnvironment;
	SCD_Struct_SC83 _compilationIssues;
	SCD_Struct_SC84 _counters;
	SCD_Struct_SC85* _renderGraph;
	BOOL enablesDeferredShading;
	BOOL _enableARMode;
	BOOL _shouldDelegateARCompositing;
	MTLRenderPassDescriptor* _clientRenderPassDescriptor;
	id<MTLRenderCommandEncoder> _clientRenderCommandEncoder;
	id<MTLCommandBuffer> _clientCommandBuffer;
	unsigned long long _debugOptions;
	double _contentScaleFactor;
	id<MTLCommandQueue> _clientCommandQueue;
	NSString* _generatedTexturePath;

}

@property (nonatomic,readonly) long long pendingGPUFrameCount; 
@property (assign,nonatomic) long long sampleCount; 
@property (assign,nonatomic) double contentScaleFactor;                                              //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic) double superSamplingFactor;                                             //@synthesize superSamplingFactor=_superSamplingFactor - In the implementation block
@property (assign,nonatomic) SCNMatrix4 screenTransform; 
@property (assign,nonatomic) BOOL wantsWideGamut; 
@property (assign,nonatomic) BOOL disableLinearRendering; 
@property (assign,nonatomic) BOOL enableARMode;                                                      //@synthesize enableARMode=_enableARMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDelegateARCompositing;                                       //@synthesize shouldDelegateARCompositing=_shouldDelegateARCompositing - In the implementation block
@property (assign,nonatomic) BOOL isOpaque; 
@property (nonatomic,readonly) long long currentFrameIndex; 
@property (assign,nonatomic) BOOL showsAuthoringEnvironment; 
@property (assign,nonatomic) BOOL enablesDeferredShading; 
@property (assign,nonatomic) BOOL reverseZ; 
@property (assign,nonatomic) BOOL collectsCompilationErrors; 
@property (nonatomic,readonly) NSMutableDictionary * compilationErrors; 
@property (nonatomic,retain) NSString * generatedTexturePath;                                        //@synthesize generatedTexturePath=_generatedTexturePath - In the implementation block
@property (nonatomic,readonly) unsigned features; 
@property (nonatomic,readonly) int profile; 
@property (nonatomic,readonly) SCNMTLResourceManager * resourceManager;                              //@synthesize resourceManager=_resourceManager - In the implementation block
@property (assign,nonatomic) unsigned long long debugOptions;                                        //@synthesize debugOptions=_debugOptions - In the implementation block
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLCommandBuffer> currentCommandBuffer; 
@property (nonatomic,readonly) id<MTLCommandBuffer> resourceCommandBuffer; 
@property (nonatomic,readonly) SCNMTLComputeCommandEncoder* resourceComputeEncoder; 
@property (nonatomic,readonly) SCNMTLBlitCommandEncoder* resourceBlitEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) C3DEngineContextRef engineContext; 
@property (nonatomic,readonly) id<MTLTexture> textureTarget; 
@property (nonatomic,readonly) CAMetalLayer * layerTarget; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (assign,nonatomic) BOOL shouldPresentAfterMinimumDuration;                                 //@synthesize shouldPresentAfterMinimumDuration=_shouldPresentAfterMinimumDuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> resourceGroup; 
@property (nonatomic,retain) MTLRenderPassDescriptor * clientRenderPassDescriptor;                   //@synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> clientRenderCommandEncoder;                 //@synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> clientCommandBuffer;                               //@synthesize clientCommandBuffer=_clientCommandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> clientCommandQueue;                                 //@synthesize clientCommandQueue=_clientCommandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) void* frameConstantBufferPool; 
@property (nonatomic,readonly) void* frameTexturePool;                                               //@synthesize frameTexturePool=_frameTexturePool - In the implementation block
@property (nonatomic,readonly) void* renderEncoder;                                                  //@synthesize renderEncoder=_renderEncoder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerBindings;
-(void)dealloc;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(long long)sampleCount;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)setSampleCount:(long long)arg1 ;
-(BOOL)isOpaque;
-(int)profile;
-(unsigned)features;
-(_C3DEngineStats*)stats;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(id<MTLCommandQueue>)clientCommandQueue;
-(id<MTLCommandBuffer>)currentCommandBuffer;
-(double)contentScaleFactor;
-(id<MTLTexture>)textureTarget;
-(void)setContentScaleFactor:(double)arg1 ;
-(SCNMTLResourceManager *)resourceManager;
-(void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(1)renderSize;
-(long long)currentFrameIndex;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(BOOL)mapVolatileMesh:(C3DMeshRef)arg1 verticesCount:(long long)arg2 ;
-(void)unmapVolatileMesh:(C3DMeshRef)arg1 modifiedVerticesCount:(long long)arg2 ;
-(void)drawRenderElement:(_C3DRendererElement*)arg1 withPass:(_C3DFXPass*)arg2 ;
-(SCNMatrix4)screenTransform;
-(id)textureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(BOOL)enableARMode;
-(BOOL)shouldDelegateARCompositing;
-(void*)renderEncoder;
-(void)_drawFullScreenTexture:(id)arg1 over:(BOOL)arg2 ;
-(SCNMTLComputeCommandEncoder*)resourceComputeEncoder;
-(C3DEngineContextRef)engineContext;
-(CAMetalLayer *)layerTarget;
-(BOOL)showsAuthoringEnvironment;
-(void)renderSKSceneWithRenderer:(id)arg1 overlay:(BOOL)arg2 atTime:(double)arg3 ;
-(unsigned long long)cubeArrayTypeIfSupported;
-(void)_drawPatchForMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(BOOL)reverseZ;
-(id)_finalRenderTexture;
-(MTLRenderPassDescriptor *)clientRenderPassDescriptor;
-(void*)frameConstantBufferPool;
-(id<MTLRenderCommandEncoder>)clientRenderCommandEncoder;
-(id<MTLCommandBuffer>)clientCommandBuffer;
-(void)beginRenderPass:(id)arg1 renderEncoder:(void*)arg2 parameters:(SCD_Struct_SC54)arg3 ;
-(void)endRenderPass;
-(void*)frameTexturePool;
-(void)renderMesh:(C3DMeshRef)arg1 meshElement:(_C3DMeshElement*)arg2 withProgram:(_C3DFXMetalProgram*)arg3 engineContext:(C3DEngineContextRef)arg4 transform:(C3DMatrix4x4)arg5 color:(const C3DColor4*)arg6 rasterizerStates:(C3DRasterizerStatesRef)arg7 blendState:(C3DBlendStatesRef)arg8 texture:(C3DImageRef)arg9 depthBias:(BOOL)arg10 ;
-(void)renderVideoBackground:(_C3DImageProxy*)arg1 engineContext:(C3DEngineContextRef)arg2 slot:(_C3DEffectSlot*)arg3 ;
-(void)renderBackground:(_C3DEffectSlot*)arg1 engineContext:(C3DEngineContextRef)arg2 passInstance:(_C3DFXPassInstance*)arg3 ;
-(BOOL)supportsMTLFeatureSet:(unsigned long long)arg1 ;
-(BOOL)enablesDeferredShading;
-(BOOL)disableLinearRendering;
-(float)renderTime;
-(void)setGeneratedTexturePath:(NSString *)arg1 ;
-(void)setClientCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setClientRenderPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setClientRenderCommandEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(void)resetVolatileMeshes;
-(void)resetVolatileMeshElements;
-(void)setClientCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)_createResourceCommandBufferIfNeeded;
-(void)_clearRenderCaches;
-(id<MTLCommandBuffer>)resourceCommandBuffer;
-(void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(C3DMatrix4x4*)arg1 ;
-(void)setRasterizerStates:(C3DRasterizerStatesRef)arg1 ;
-(float)_zFarForSkyboxRenderingProjectionMatrix:(const C3DMatrix4x4*)arg1 defaultZFar:(float)arg2 ;
-(void)_setMeshBuffers:(id)arg1 ;
-(void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(void)startProcessingRendererElementsWithEngineIterationContext:(SCD_Struct_SC87*)arg1 ;
-(void)beginDeferredLighting;
-(void)renderLight:(_C3DNode*)arg1 lightType:(int)arg2 lightData:(_C3DLightRuntimeData*)arg3 ;
-(void)endDeferredLighting;
-(unsigned long long)debugOptions;
-(void)drawWireframeOverlayForElements:(SCD_Struct_SC88*)arg1 range:(SCD_Struct_SC89)arg2 store:(C3DRendererElementStoreRef)arg3 passInstance:(_C3DFXPassInstance*)arg4 ;
-(void)stopProcessingRendererElements:(BOOL)arg1 ;
-(void)_drawPBRTextures;
-(void)_drawShadowMaps;
-(id)radianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(id)irradianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1 ;
-(void)_recycleMTLBufferToPool:(id)arg1 ;
-(_C3DFXPass*)_createPassWithVertex:(id)arg1 fragment:(id)arg2 ;
-(void)_reduceStatsOfConstantBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(void)setScreenTransform:(SCNMatrix4)arg1 ;
-(void)setWantsWideGamut:(BOOL)arg1 ;
-(BOOL)wantsWideGamut;
-(long long)pendingGPUFrameCount;
-(void)setDisableLinearRendering:(BOOL)arg1 ;
-(void)setReverseZ:(BOOL)arg1 ;
-(void)setIsOpaque:(BOOL)arg1 ;
-(void)_clearUnusedBindingPoints;
-(NSObject*<OS_dispatch_group>)resourceGroup;
-(void)beginFrame:(id)arg1 ;
-(void)endFrameSceneSpecifics;
-(void)endFrameWaitingUntilCompleted:(BOOL)arg1 ;
-(id)_reflectionProbeArrayTexture;
-(void)_setReflectionProbeArrayTexture:(id)arg1 ;
-(void*)_clusterInfo;
-(SCNMTLBlitCommandEncoder*)resourceBlitEncoder;
-(id)newRenderTargetWithDescription:(SCD_Struct_SC45*)arg1 size:(unsigned long long)arg2 ;
-(void)_logLightingInformation;
-(void)_setSceneBufferAtVertexIndex:(long long)arg1 fragmentIndex:(long long)arg2 ;
-(void)processRendererElements:(SCD_Struct_SC88*)arg1 count:(unsigned)arg2 engineIterationContext:(SCD_Struct_SC87*)arg3 ;
-(void)_prepareMaterialTextures:(C3DMaterialRef)arg1 ;
-(void)setShowsAuthoringEnvironment:(BOOL)arg1 ;
-(BOOL)collectsCompilationErrors;
-(void)setCollectsCompilationErrors:(BOOL)arg1 ;
-(NSMutableDictionary *)compilationErrors;
-(_C3DMeshElement*)createVolatileMeshElementOfType:(char)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3 ;
-(void)unmapVolatileMeshElement:(_C3DMeshElement*)arg1 ;
-(void)drawFullScreenQuadForPass:(_C3DFXPass*)arg1 ;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)endRenderCommandEncoding;
-(void)setCurrentPassHash:(unsigned long long)arg1 ;
-(void)setCurrentPassMaterial:(C3DMaterialRef)arg1 ;
-(unsigned long long)getCurrentPassHash;
-(C3DMaterialRef)getCurrentPassMaterial;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(void)setEnablesDeferredShading:(BOOL)arg1 ;
-(BOOL)shouldPresentAfterMinimumDuration;
-(void)setShouldPresentAfterMinimumDuration:(BOOL)arg1 ;
-(double)superSamplingFactor;
-(void)setSuperSamplingFactor:(double)arg1 ;
-(void)setEnableARMode:(BOOL)arg1 ;
-(void)setShouldDelegateARCompositing:(BOOL)arg1 ;
-(NSString *)generatedTexturePath;
@end

