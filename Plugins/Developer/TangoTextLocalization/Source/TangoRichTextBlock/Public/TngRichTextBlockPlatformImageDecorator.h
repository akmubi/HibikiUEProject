#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "TngRichTextBlockImageDecoratorBase.h"
#include "TngRichTextBlockPlatformImageDecorator.generated.h"

class APlayerController;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TANGORICHTEXTBLOCK_API UTngRichTextBlockPlatformImageDecorator : public UTngRichTextBlockImageDecoratorBase {
    GENERATED_BODY()
public:
    UTngRichTextBlockPlatformImageDecorator();

    UFUNCTION(BlueprintCallable)
    static void K2_FindImageBrushesEx(UPARAM(Ref) TArray<FSlateBrush>& OutBrushes, UPARAM(Ref) TArray<FText>& OutPendingDecorations, APlayerController* PlayerController, FName TagOrId, int32 MaxDecorations);
    
    UFUNCTION(BlueprintCallable)
    static void K2_FindImageBrushes(UPARAM(Ref) TArray<FSlateBrush>& OutBrushes, APlayerController* PlayerController, FName TagOrId, int32 MaxDecorations);
    
};

