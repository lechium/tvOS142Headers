/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface APSMultiUserFS : NSObject {

	NSString* _systemPathCache;
	BOOL _isMultiUser;

}

@property (readonly) BOOL isMultiUser;              //@synthesize isMultiUser=_isMultiUser - In the implementation block
+(id)sharedInstance;
-(BOOL)isMultiUser;
-(id)systemPath;
-(id)initWithIsMultiUserMode:(BOOL)arg1 ;
@end

