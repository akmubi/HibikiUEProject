#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MovieScreenEndDelegate.h"
#include "HbkGimmick_MovieScreenStartDelegate.h"
#include "HbkGimmick_MovieScreen.generated.h"

class UTexture;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_MovieScreen : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MovieScreenStart OnMovieStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MovieScreenEnd OnMovieEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_MovieScreenEnd OnMovieClose;
    
    AHbkGimmick_MovieScreen(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MovieStartFunc(UTexture* NewMediaTexture);
    
    UFUNCTION(BlueprintCallable)
    void MovieEndFunc();
    
    UFUNCTION(BlueprintCallable)
    void MovieCloseFunc();
    
};

