/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, FBSOpenApplicationOptions, FBProcess;

@interface FBSystemServiceOpenApplicationRequest : NSObject {

	NSString* _bundleIdentifier;
	FBSOpenApplicationOptions* _options;
	FBProcess* _clientProcess;
	BOOL _trusted;

}

@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                  //@synthesize trusted=_trusted - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) FBSOpenApplicationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBProcess * clientProcess;                      //@synthesize clientProcess=_clientProcess - In the implementation block
+(id)request;
-(id)description;
-(NSString *)bundleIdentifier;
-(FBSOpenApplicationOptions *)options;
-(void)setOptions:(FBSOpenApplicationOptions *)arg1 ;
-(BOOL)isTrusted;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(FBProcess *)clientProcess;
-(void)setTrusted:(BOOL)arg1 ;
-(void)setClientProcess:(FBProcess *)arg1 ;
@end
