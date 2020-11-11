/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestLiveRenderingOptions.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions> {

	BOOL _networkAccessAllowed;
	BOOL _streamingAllowed;
	BOOL _videoComplementAllowed;
	BOOL _allowMediumHighQuality;
	BOOL _restrictToPlayableOnCurrentDevice;
	BOOL _liveRenderVideoIfNeeded;
	BOOL _liveRenderAndOnDemandRenderVideoConcurrently;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;
	long long _streamingVideoIntent;
	long long _contentMode;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	CGSize _targetSize;

}

@property (nonatomic,copy,readonly) id progressHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isStreamingAllowed,nonatomic) BOOL streamingAllowed;                            //@synthesize streamingAllowed=_streamingAllowed - In the implementation block
@property (assign,nonatomic) long long streamingVideoIntent;                                             //@synthesize streamingVideoIntent=_streamingVideoIntent - In the implementation block
@property (assign,getter=isVideoComplementAllowed,nonatomic) BOOL videoComplementAllowed;                //@synthesize videoComplementAllowed=_videoComplementAllowed - In the implementation block
@property (assign,getter=isMediumHighQualityAllowed,nonatomic) BOOL allowMediumHighQuality;              //@synthesize allowMediumHighQuality=_allowMediumHighQuality - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                          //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                      //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) BOOL restrictToPlayableOnCurrentDevice;                                     //@synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice - In the implementation block
@property (assign,nonatomic) BOOL liveRenderVideoIfNeeded;                                               //@synthesize liveRenderVideoIfNeeded=_liveRenderVideoIfNeeded - In the implementation block
@property (assign,nonatomic) BOOL liveRenderAndOnDemandRenderVideoConcurrently;                          //@synthesize liveRenderAndOnDemandRenderVideoConcurrently=_liveRenderAndOnDemandRenderVideoConcurrently - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                            //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;                    //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) long long version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                                     //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                           //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(long long)contentMode;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)isSynchronous;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
-(void)setContentMode:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isCurrentVersion;
-(BOOL)liveRenderVideoIfNeeded;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)renderResultHandlerQueue;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(void)setStreamingAllowed:(BOOL)arg1 ;
-(long long)streamingVideoIntent;
-(void)setStreamingVideoIntent:(long long)arg1 ;
-(BOOL)isVideoComplementAllowed;
-(void)setVideoComplementAllowed:(BOOL)arg1 ;
-(void)setRestrictToPlayableOnCurrentDevice:(BOOL)arg1 ;
-(void)setAllowMediumHighQuality:(BOOL)arg1 ;
-(void)setLiveRenderVideoIfNeeded:(BOOL)arg1 ;
-(void)setLiveRenderAndOnDemandRenderVideoConcurrently:(BOOL)arg1 ;
@end

