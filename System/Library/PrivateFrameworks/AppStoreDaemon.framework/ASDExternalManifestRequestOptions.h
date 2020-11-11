/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions {

	BOOL _shouldHideUserPrompts;
	NSURL* _manifestURL;

}

@property (nonatomic,readonly) NSURL * manifestURL;                   //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUserPrompts;              //@synthesize shouldHideUserPrompts=_shouldHideUserPrompts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(NSURL *)manifestURL;
@end

