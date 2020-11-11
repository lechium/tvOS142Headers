/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {

	NSString* _daemonJobLabel;

}
-(id)debugDescription;
-(BOOL)isDaemon;
-(BOOL)isAnonymous;
-(id)daemonJobLabel;
-(id)copyWithEuid:(unsigned)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)_initDaemonWithJobLabel:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
@end

