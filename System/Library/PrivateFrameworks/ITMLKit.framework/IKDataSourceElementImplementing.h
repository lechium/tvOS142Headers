/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, IKChangeSet, NSDictionary;


@protocol IKDataSourceElementImplementing <NSObject>
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKChangeSet * itemsChangeSet; 
@property (nonatomic,copy,readonly) NSDictionary * indexTitles; 
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@optional
-(void)resetImplicitUpdates;
-(NSArray *)masterPrototypes;
-(NSArray *)proxiedItemElements;
-(id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
-(id)proxyElementForLoadedChildElement:(id)arg1;
-(BOOL)canProxyUnloadedChildElement:(id)arg1;

@required
-(void)teardown;
-(long long)numberOfItems;
-(NSArray *)prototypes;
-(NSDictionary *)indexTitles;
-(IKChangeSet *)itemsChangeSet;
-(void)initializeWithElementFactory:(id)arg1;
-(void)configureUpdatesWithImplementation:(id)arg1;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2;
-(id)prototypeForItemAtIndex:(long long)arg1;
-(id)elementForItemAtIndex:(long long)arg1;
-(long long)indexOfItemForElement:(id)arg1;
-(void)loadIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(void)resetUpdates;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1;

@end

