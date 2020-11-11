/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionOriginatorPidPersisting.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {

	SCD_Struct_RB4* _header;
	NSString* _path;
	int* _pids;
	int _headerID;
	int _pidsID;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)debugDescription;
-(void)dealloc;
-(BOOL)isValid;
-(id)initWithPath:(id)arg1 ;
-(id)captureState;
-(NSString *)stateCaptureTitle;
-(void)removePid:(int)arg1 ;
-(void)addPid:(int)arg1 ;
-(void)setValidProcesses:(id)arg1 ;
-(BOOL)containsPid:(int)arg1 ;
@end

