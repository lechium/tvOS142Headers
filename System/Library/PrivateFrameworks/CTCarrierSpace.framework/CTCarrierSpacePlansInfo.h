/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroupsList;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroupsList;              //@synthesize planGroupsList=_planGroupsList - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;               //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)morePlansURL;
-(void)setMorePlansURL:(NSString *)arg1 ;
-(NSArray *)planGroupsList;
-(void)setPlanGroupsList:(NSArray *)arg1 ;
@end
