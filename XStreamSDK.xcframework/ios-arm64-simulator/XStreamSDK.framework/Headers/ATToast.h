//
//  ATToast.h
//  AirtelMovies
//
//  Created by Rohit Yadav on 26/09/17.
//  Copyright © 2017 Accedo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ATToast : NSObject

+ (ATToast *)shared;
- (void)showToastMessage:(NSString *)message;

@end
