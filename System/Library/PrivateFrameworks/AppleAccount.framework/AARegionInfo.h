/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface AARegionInfo : NSObject <NSCopying> {

	NSDictionary* _regionInfoDictionary;

}

@property (nonatomic,readonly) NSString * displayedHostname; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayedHostname;
@end

