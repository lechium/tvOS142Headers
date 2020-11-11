/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;                //@synthesize partial=_partial - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) MFDataHolder * dataHolder;                    //@synthesize dataHolder=_dataHolder - In the implementation block
@property (nonatomic,retain) NSString * partName;                          //@synthesize partName=_partName - In the implementation block
-(void)dealloc;
-(void)setData:(id)arg1 ;
-(BOOL)isComplete;
-(NSString *)partName;
-(void)setPartName:(NSString *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(MFDataHolder *)dataHolder;
-(BOOL)isPartial;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
-(void)setPartial:(BOOL)arg1 ;
@end
