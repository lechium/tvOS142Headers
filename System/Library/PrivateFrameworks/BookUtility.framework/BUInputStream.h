/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BUInputStream <NSObject>
@required
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;

@end
