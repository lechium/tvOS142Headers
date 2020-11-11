/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject {

	NSMutableDictionary* __loadHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * _loadHandlers;              //@synthesize _loadHandlers=__loadHandlers - In the implementation block
@property (nonatomic,readonly) NSSet * registeredIdentifiers; 
+(id)providerWithItem:(id)arg1 identifier:(id)arg2 ;
-(id)init;
-(id)itemForIdentifier:(id)arg1 ;
-(void)registerItemForIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemForIdentifier:(id)arg1 ;
-(NSSet *)registeredIdentifiers;
-(void)registerItem:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)_loadHandlers;
@end

