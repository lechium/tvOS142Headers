/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(long long)tlvid;
-(void)setTlvid:(long long)arg1 ;
@end

