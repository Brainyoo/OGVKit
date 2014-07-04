//
//  OGVFrameView.h
//  OgvDemo
//
//  Created by Brion on 11/6/13.
//  Copyright (c) 2013 Brion Vibber. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <OgvKit/OgvKit.h>

@interface OGVFrameView : GLKView

- (void)drawFrame:(OGVFrameBuffer *)buffer;

@end
