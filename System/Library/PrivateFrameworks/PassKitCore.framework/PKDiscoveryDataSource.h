/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKDiscoveryObserver.h>

@protocol OS_dispatch_queue, PKDiscoveryDataSourceDelegate;
@class PKDiscoveryService, NSArray, NSObject, NSString;

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {

	PKDiscoveryService* _discoveryService;
	os_unfair_lock_s _articleLayoutsLock;
	NSArray* _articleLayouts;
	BOOL _updatingArticles;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<PKDiscoveryDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKDiscoveryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * articleLayouts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKDiscoveryDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryDataSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateArticleLayouts;
-(void)_updateArticlesWithCompletion:(/*^block*/id)arg1 ;
-(id)_articleLayoutForItemIdentifier:(id)arg1 ;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_updateArticleLayouts:(id)arg1 ;
-(NSArray *)articleLayouts;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg1 ;
-(void)_addDismissActionToArticleLayouts:(id)arg1 ;
-(void)setArticleLayouts:(NSArray *)arg1 ;
-(void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2 ;
-(id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1 ;
@end

