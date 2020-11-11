/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary, NSString;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidProcessNameMap;
	NSString* _niluuidProcessName;

}
-(id)init;
-(id)stateDictionary;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidProcessNameMapPrune;
-(void)noteUUID:(id)arg1 forProcessName:(id)arg2 ;
@end
