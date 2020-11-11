/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {

	NSString* _embeddedApplicationIdentifier;

}
-(id)debugDescription;
-(id)embeddedApplicationIdentifier;
-(BOOL)isApplication;
-(BOOL)isAnonymous;
-(BOOL)isEmbeddedApplication;
-(id)encodeForJob;
-(unsigned char)defaultManageFlags;
-(id)copyWithEuid:(unsigned)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 ;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 jobLabel:(id)arg4 ;
@end

