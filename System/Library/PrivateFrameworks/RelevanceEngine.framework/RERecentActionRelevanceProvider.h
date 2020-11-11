/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider : RERelevanceProvider {

	NSString* _bundleIdentifier;
	unsigned long long _actionIdentifier;

}

@property (nonatomic,readonly) RERecentAction * recentAction; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(unsigned long long)actionIdentifier;
-(RERecentAction *)recentAction;
-(id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2 ;
@end

