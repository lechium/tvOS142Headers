/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject {

	NSString* _name;
	NSString* _unitDescription;

}

@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * unitDescription;              //@synthesize unitDescription=_unitDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)dump;
-(id)initWithName:(id)arg1 description:(id)arg2 ;
-(NSString *)unitDescription;
-(id)generateDictionary;
-(void)setUnitDescription:(NSString *)arg1 ;
@end

