/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreBluetooth/CoreBluetooth-Structs.h>
@class NSError, NSArray;

@interface CBWriteRequest : NSObject {

	NSError* _error;
	iovec* _iov[16];
	iovec* _iop;
	int _ion;
	unsigned long long _offset;
	BOOL _endOfData;
	/*^block*/id _completion;
	NSArray* _dataArray;

}

@property (nonatomic,copy) id completion;                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;              //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) BOOL endOfData;                   //@synthesize endOfData=_endOfData - In the implementation block
@property (nonatomic,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)completion;
-(NSArray *)dataArray;
-(void)setCompletion:(id)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
-(BOOL)endOfData;
-(void)setEndOfData:(BOOL)arg1 ;
@end

