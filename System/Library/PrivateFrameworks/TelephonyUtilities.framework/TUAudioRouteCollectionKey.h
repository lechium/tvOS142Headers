/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying> {

	NSString* _category;
	NSString* _mode;

}

@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                  //@synthesize mode=_mode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 ;
@end

