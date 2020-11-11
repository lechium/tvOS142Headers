/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface DEValidationResult : NSObject {

	NSString* _status;
	NSArray* _errors;
	NSArray* _warnings;

}

@property (nonatomic,retain) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * errors;                //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * warnings;              //@synthesize warnings=_warnings - In the implementation block
-(NSString *)status;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSArray *)warnings;
-(void)setWarnings:(NSArray *)arg1 ;
@end

