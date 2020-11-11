/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _pointerIsAbsolute;
	double _pointerX;
	double _pointerY;
	double _pointerZ;
	double _pointerAccelX;
	double _pointerAccelY;
	double _pointerAccelZ;
	double _pointerButtonMask;
	double _pointerButtonNumber;
	double _pointerButtonClickCount;
	double _pointerButtonPressure;

}

@property (assign,nonatomic) double pointerX;                             //@synthesize pointerX=_pointerX - In the implementation block
@property (assign,nonatomic) double pointerY;                             //@synthesize pointerY=_pointerY - In the implementation block
@property (assign,nonatomic) double pointerZ;                             //@synthesize pointerZ=_pointerZ - In the implementation block
@property (assign,nonatomic) double pointerAccelX;                        //@synthesize pointerAccelX=_pointerAccelX - In the implementation block
@property (assign,nonatomic) double pointerAccelY;                        //@synthesize pointerAccelY=_pointerAccelY - In the implementation block
@property (assign,nonatomic) double pointerAccelZ;                        //@synthesize pointerAccelZ=_pointerAccelZ - In the implementation block
@property (assign,nonatomic) double pointerButtonMask;                    //@synthesize pointerButtonMask=_pointerButtonMask - In the implementation block
@property (assign,nonatomic) double pointerButtonNumber;                  //@synthesize pointerButtonNumber=_pointerButtonNumber - In the implementation block
@property (assign,nonatomic) double pointerButtonClickCount;              //@synthesize pointerButtonClickCount=_pointerButtonClickCount - In the implementation block
@property (assign,nonatomic) double pointerButtonPressure;                //@synthesize pointerButtonPressure=_pointerButtonPressure - In the implementation block
@property (assign,nonatomic) BOOL pointerIsAbsolute;                      //@synthesize pointerIsAbsolute=_pointerIsAbsolute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)setPointerX:(double)arg1 ;
-(void)setPointerY:(double)arg1 ;
-(void)setPointerZ:(double)arg1 ;
-(void)setPointerAccelX:(double)arg1 ;
-(void)setPointerAccelY:(double)arg1 ;
-(void)setPointerAccelZ:(double)arg1 ;
-(void)setPointerButtonMask:(double)arg1 ;
-(void)setPointerButtonNumber:(double)arg1 ;
-(void)setPointerButtonClickCount:(double)arg1 ;
-(void)setPointerButtonPressure:(double)arg1 ;
-(void)setPointerIsAbsolute:(BOOL)arg1 ;
-(double)pointerX;
-(double)pointerY;
-(double)pointerZ;
-(double)pointerAccelX;
-(double)pointerAccelY;
-(double)pointerAccelZ;
-(double)pointerButtonMask;
-(double)pointerButtonNumber;
-(double)pointerButtonClickCount;
-(double)pointerButtonPressure;
-(BOOL)pointerIsAbsolute;
@end

