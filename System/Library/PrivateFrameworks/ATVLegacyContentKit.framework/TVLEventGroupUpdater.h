/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class TVLDocument, TVLVideoAssetElement, NSMutableArray, NSObject;

@interface TVLEventGroupUpdater : NSObject {

	TVLDocument* _feedDocument;
	TVLVideoAssetElement* _feedElement;
	NSMutableArray* _eventGroupLoaders;
	NSObject*<OS_dispatch_queue> _documentLoaderCreationQueue;

}

@property (nonatomic,retain) TVLDocument * feedDocument;                                            //@synthesize feedDocument=_feedDocument - In the implementation block
@property (nonatomic,retain) TVLVideoAssetElement * feedElement;                                    //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventGroupLoaders;                                    //@synthesize eventGroupLoaders=_eventGroupLoaders - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> documentLoaderCreationQueue;              //@synthesize documentLoaderCreationQueue=_documentLoaderCreationQueue - In the implementation block
-(void)dealloc;
-(TVLDocument *)feedDocument;
-(id)initWithFeedElement:(id)arg1 ;
-(void)_cancelAllEventGroupLoaders;
-(id)_requiredEventGroupURLStrings;
-(NSMutableArray *)eventGroupLoaders;
-(void)_processEventGroupDocument:(id)arg1 forRequestedURL:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_fetchDocumentLoaderWithURLString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_eventGroupURLStrings;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(id)_chaptersFromEventGroupElement:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)documentLoaderCreationQueue;
-(void)loadEventGroupChapterCollectionsAndInterstitialsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadEventGroupURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelAllLoads;
-(TVLVideoAssetElement *)feedElement;
-(void)setFeedElement:(TVLVideoAssetElement *)arg1 ;
-(void)setEventGroupLoaders:(NSMutableArray *)arg1 ;
-(void)setDocumentLoaderCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

