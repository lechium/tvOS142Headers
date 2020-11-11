/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSURL, NSArray, TVImageProxy;

@interface TVPMediaItemContentProposal : NSObject {

	BOOL _loadingStarted;
	NSString* _title;
	double _presentationTime;
	NSNumber* _automaticAcceptanceInterval;
	NSURL* _previewImageURL;
	NSArray* _metadata;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) TVImageProxy * imageProxy;                           //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL loadingStarted;                                 //@synthesize loadingStarted=_loadingStarted - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double presentationTime;                             //@synthesize presentationTime=_presentationTime - In the implementation block
@property (nonatomic,retain) NSNumber * automaticAcceptanceInterval;              //@synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval - In the implementation block
@property (nonatomic,retain) NSURL * previewImageURL;                             //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,retain) NSArray * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL needsLoading; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutomaticAcceptanceInterval:(NSNumber *)arg1 ;
-(NSNumber *)automaticAcceptanceInterval;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(double)presentationTime;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(NSURL *)previewImageURL;
-(BOOL)loadingStarted;
-(void)setLoadingStarted:(BOOL)arg1 ;
-(BOOL)needsLoading;
-(void)setPresentationTime:(double)arg1 ;
@end

