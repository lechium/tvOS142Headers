/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEWriter.h>

@class NSMutableData, NSArray;

@interface DEMultiWriter : NSObject <DEWriter> {

	NSMutableData* _data;
	NSArray* _writers;

}

@property (nonatomic,retain) NSArray * writers;                 //@synthesize writers=_writers - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSMutableData *)data;
-(void)close;
-(void)setData:(NSMutableData *)arg1 ;
-(void)writeData:(id)arg1 ;
-(id)initWithWriters:(id)arg1 ;
-(NSArray *)writers;
-(void)setWriters:(NSArray *)arg1 ;
@end

