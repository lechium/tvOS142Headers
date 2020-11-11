/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@protocol PVImageSeqDelegate, PVCompositeDelegate;
@class PVColorSpace, NSURL, NSString, PVImageBuffer, PVInstructionGraphNode, NSDictionary, NSObject, PVCompositeDelegateEffect;

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {

	HGRef<PVRenderManager>* _renderManager;
	BOOL _canPreprocess;
	BOOL _canRender;
	int _nodeType;
	int _trackID;
	unsigned _outputFormat;
	PVColorSpace* _colorSpace;
	NSURL* _imageURL;
	NSString* _imageKey;
	PVImageBuffer* _imageBuffer;
	PVInstructionGraphNode* _graphNode;
	NSDictionary* _inputMap;
	id<PVImageSeqDelegate> _imageSeqDelegate;
	id<PVCompositeDelegate> _renderDelegate;
	NSObject* _metadata;
	id _userContext;
	PVCompositeDelegateEffect* _delegateEffect;
	CGSize _outputSize;

}

@property (assign,nonatomic) int nodeType;                                            //@synthesize nodeType=_nodeType - In the implementation block
@property (assign,nonatomic) int trackID;                                             //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * imageKey;                                     //@synthesize imageKey=_imageKey - In the implementation block
@property (nonatomic,retain) PVImageBuffer * imageBuffer;                             //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (assign,nonatomic) CGSize outputSize;                                       //@synthesize outputSize=_outputSize - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                   //@synthesize outputFormat=_outputFormat - In the implementation block
@property (nonatomic,retain) PVInstructionGraphNode * graphNode;                      //@synthesize graphNode=_graphNode - In the implementation block
@property (nonatomic,retain) NSDictionary * inputMap;                                 //@synthesize inputMap=_inputMap - In the implementation block
@property (nonatomic,retain) id<PVImageSeqDelegate> imageSeqDelegate;                 //@synthesize imageSeqDelegate=_imageSeqDelegate - In the implementation block
@property (nonatomic,retain) id<PVCompositeDelegate> renderDelegate;                  //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,retain) NSObject * metadata;                                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id userContext;                                          //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) BOOL canPreprocess;                                      //@synthesize canPreprocess=_canPreprocess - In the implementation block
@property (assign,nonatomic) BOOL canRender;                                          //@synthesize canRender=_canRender - In the implementation block
@property (nonatomic,retain) PVCompositeDelegateEffect * delegateEffect;              //@synthesize delegateEffect=_delegateEffect - In the implementation block
@property (nonatomic,retain) PVColorSpace * colorSpace;                               //@synthesize colorSpace=_colorSpace - In the implementation block
+(id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3 ;
+(id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1 ;
+(id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(CGSize)arg2 ;
+(id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(CGSize)arg2 outputFormat:(unsigned)arg3 ;
+(id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(CGSize)arg4 outputFormat:(unsigned)arg5 ;
+(id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 userContext:(id)arg3 outputSize:(CGSize)arg4 outputFormat:(unsigned)arg5 ;
-(id)init;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(NSObject *)metadata;
-(void)setMetadata:(NSObject *)arg1 ;
-(id)userContext;
-(PVColorSpace *)colorSpace;
-(void)setColorSpace:(PVColorSpace *)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(PVImageBuffer *)imageBuffer;
-(int)nodeType;
-(NSURL *)imageURL;
-(void)setUserContext:(id)arg1 ;
-(void)setImageBuffer:(PVImageBuffer *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setRenderDelegate:(id<PVCompositeDelegate>)arg1 ;
-(id<PVCompositeDelegate>)renderDelegate;
-(void)setNodeType:(int)arg1 ;
-(CGSize)outputSize;
-(void)setOutputSize:(CGSize)arg1 ;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV0)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(id)getAllSourceNodes;
-(void)unloadIGNode;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)setImageKey:(NSString *)arg1 ;
-(void)setImageSeqDelegate:(id<PVImageSeqDelegate>)arg1 ;
-(void)setGraphNode:(PVInstructionGraphNode *)arg1 ;
-(void)setInputMap:(NSDictionary *)arg1 ;
-(void)setCanPreprocess:(BOOL)arg1 ;
-(void)setCanRender:(BOOL)arg1 ;
-(PVCompositeDelegateEffect *)delegateEffect;
-(PVInstructionGraphNode *)graphNode;
-(NSDictionary *)inputMap;
-(void)addDotTreeLinks:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id<PVImageSeqDelegate>)imageSeqDelegate;
-(BOOL)canPreprocess;
-(BOOL)canRender;
-(HGRef<HGNode>*)conformInputImage:(id)arg1 colorSpace:(id)arg2 renderer:(const HGRef<HGRenderer>*)arg3 currentTime:(SCD_Struct_PV0)arg4 igContext:(HGRef<PVInstructionGraphContext>*)arg5 ;
-(HGRef<HGNode>*)conformNode:(HGRef<HGNode>*)arg1 toSize:(HGRect)arg2 ;
-(HGRef<HGNode>*)nodeForCompositeTrackMap:(const map<int, __CVBuffer *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, __CVBuffer *> > >*)arg1 ;
-(NSString *)imageKey;
-(void)setDelegateEffect:(PVCompositeDelegateEffect *)arg1 ;
@end

