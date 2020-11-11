/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface DEPublication : NSObject {

	BOOL _disabled;
	NSDictionary* _distributions;
	NSString* _tag;
	NSString* _lastModified;

}

@property (nonatomic,retain) NSDictionary * distributions;              //@synthesize distributions=_distributions - In the implementation block
@property (nonatomic,retain) NSString * tag;                            //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (assign,nonatomic) BOOL disabled;                             //@synthesize disabled=_disabled - In the implementation block
+(id)dateToLastModified:(id)arg1 ;
+(BOOL)write:(id)arg1 tag:(id)arg2 date:(id)arg3 disabled:(BOOL)arg4 toURL:(id)arg5 keyId:(unsigned long long)arg6 privateKey:(id)arg7 ;
-(id)init;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setLastModified:(NSString *)arg1 ;
-(NSString *)lastModified;
-(id)initWithDistributions:(id)arg1 tag:(id)arg2 lastModified:(id)arg3 disabled:(BOOL)arg4 ;
-(id)getPublicationId;
-(NSDictionary *)distributions;
-(void)setDistributions:(NSDictionary *)arg1 ;
@end
