/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(id)initWithProcessIdentifier:(int)arg1 ;
-(void)_populateResultWithLockWitness:(id)arg1 ;
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
@end
