/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKActionExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OKAction : NSObject <OKActionExports, NSSecureCoding> {

	double _timestamp;
	CGPoint _location;
	unsigned long long _state;
	unsigned long long _touchCount;
	BOOL _shouldCancelCouchPotato;
	BOOL _shouldPropagate;
	BOOL _isInstantaneous;
	unsigned long long _scope;
	unsigned long long _platform;
	NSMutableDictionary* _context;
	NSString* _keyPath;

}

@property (nonatomic,retain) NSString * keyPath;                                  //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) BOOL shouldPropagate;                                //@synthesize shouldPropagate=_shouldPropagate - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelCouchPotato;                        //@synthesize shouldCancelCouchPotato=_shouldCancelCouchPotato - In the implementation block
@property (assign,nonatomic) BOOL isInstantaneous;                                //@synthesize isInstantaneous=_isInstantaneous - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                            //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long touchCount;                       //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                       //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * context;              //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)action;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)createContext;
+(unsigned long long)directionFromPoint:(CGPoint)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)keyPath;
-(NSMutableDictionary *)context;
-(double)timestamp;
-(unsigned long long)scope;
-(void)setTimestamp:(double)arg1 ;
-(void)setScope:(unsigned long long)arg1 ;
-(unsigned long long)platform;
-(CGPoint)location;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(unsigned long long)touchCount;
-(id)initWithLocation:(CGPoint)arg1 touchCount:(unsigned long long)arg2 context:(id)arg3 ;
-(id)initWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
-(void)setShouldCancelCouchPotato:(BOOL)arg1 ;
-(void)convertFromResponder:(id)arg1 toResponder:(id)arg2 ;
-(void)setShouldPropagate:(BOOL)arg1 ;
-(BOOL)shouldCancelCouchPotato;
-(BOOL)isInstantaneous;
-(BOOL)shouldPropagate;
-(void)setIsInstantaneous:(BOOL)arg1 ;
-(void)setContextObject:(id)arg1 forKey:(id)arg2 ;
-(void)setTouchCount:(unsigned long long)arg1 ;
@end

