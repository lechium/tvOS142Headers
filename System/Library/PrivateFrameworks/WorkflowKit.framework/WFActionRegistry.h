/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFActionProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary, NSMapTable, NSSet, NSString;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate> {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;
	NSObject*<OS_dispatch_queue> _cacheUpdateAndFillQueue;
	NSArray* _actionProvidersForFilling;
	NSArray* _actionProvidersForLoading;
	NSDictionary* _actionsByIdentifier;
	NSMapTable* _actionsByActionProvider;
	NSDictionary* _actionsByCategory;

}

@property (nonatomic,readonly) NSSet * identifiersOfActionsDisabledOnWatch; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;                     //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheUpdateAndFillQueue;              //@synthesize cacheUpdateAndFillQueue=_cacheUpdateAndFillQueue - In the implementation block
@property (nonatomic,readonly) NSArray * actionProvidersForFilling;                               //@synthesize actionProvidersForFilling=_actionProvidersForFilling - In the implementation block
@property (nonatomic,readonly) NSArray * actionProvidersForLoading;                               //@synthesize actionProvidersForLoading=_actionProvidersForLoading - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsByIdentifier;                                //@synthesize actionsByIdentifier=_actionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionsByActionProvider;                              //@synthesize actionsByActionProvider=_actionsByActionProvider - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsByCategory;                                  //@synthesize actionsByCategory=_actionsByCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
@property (nonatomic,readonly) NSSet * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
-(NSString *)description;
-(id)init;
-(unsigned long long)state;
-(NSSet *)actions;
-(NSSet *)categories;
-(void)fill;
-(id)createActionWithShortcut:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(NSSet *)identifiersOfActionsDisabledOnWatch;
-(id)handleIntentActionForDonatedIntent:(id)arg1 ;
-(id)createActionWithDonation:(id)arg1 ;
-(void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4 ;
-(id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
-(id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2 ;
-(id)replacementActionForActionIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
-(id)actionsForCategory:(id)arg1 ;
-(id)actionsForAppWithIdentifier:(id)arg1 ;
-(void)updateCachesAndFill;
-(void)fillActionProviders:(id)arg1 ;
-(void)updateCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)setActions:(id)arg1 forProvider:(id)arg2 ;
-(void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2 ;
-(void)addActions:(id)arg1 fromActionProvider:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheUpdateAndFillQueue;
-(NSArray *)actionProvidersForFilling;
-(NSArray *)actionProvidersForLoading;
-(NSDictionary *)actionsByIdentifier;
-(NSMapTable *)actionsByActionProvider;
-(NSDictionary *)actionsByCategory;
-(id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2 ;
-(id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2 ;
-(id)residentCompatibleActionsForHome:(id)arg1 ;
-(id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2 ;
-(id)residentBasedActionsForHome:(id)arg1 residentCompatible:(BOOL)arg2 ;
-(id)suggestionsForHome:(id)arg1 includingRelatedActions:(BOOL)arg2 ;
@end
