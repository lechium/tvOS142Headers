/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSCoding> {

	NSString* _subject;
	NSString* _body;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSURL* _reference;
	int _type;

}

@property (nonatomic,copy) NSString * subject;               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * to;                     //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                     //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                    //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSURL * reference;              //@synthesize reference=_reference - In the implementation block
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(NSURL *)reference;
-(void)setReference:(NSURL *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)to;
-(void)setTo:(NSArray *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(NSArray *)cc;
-(NSArray *)bcc;
@end

