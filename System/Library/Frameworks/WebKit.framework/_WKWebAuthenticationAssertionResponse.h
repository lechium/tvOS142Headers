/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface _WKWebAuthenticationAssertionResponse : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSData* _userHandle;

}

@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSData * userHandle;                 //@synthesize userHandle=_userHandle - In the implementation block
-(NSString *)name;
-(NSString *)displayName;
-(NSData *)userHandle;
@end

