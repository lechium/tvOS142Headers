/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFStream <NSObject,NSLocking>
@required
-(void)closeStream;
-(BOOL)openStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;

@end

