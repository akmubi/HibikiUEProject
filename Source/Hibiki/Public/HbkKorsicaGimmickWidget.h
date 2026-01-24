#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickAnimName.h"
#include "HbkUserWidget.h"
#include "HbkKorsicaGimmickWidget.generated.h"

class UHbkKorsicaGimmickDataAsset;
class UHbkKorsicaGimmickPartsWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkKorsicaGimmickWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isGameLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkKorsicaGimmickDataAsset* RhythmPatDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkKorsicaGimmickPartsWidget*> PartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkKorsicaGimmickAnimName, UWidgetAnimation*> AnimList;
    
public:
    UHbkKorsicaGimmickWidget();

    UFUNCTION(BlueprintCallable)
    void StartLoopAnims();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNoteCount(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void RingOpen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    void PressRT();
    
    UFUNCTION(BlueprintCallable)
    void PlayShadowLoopAnim(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void PlayCursorLoopAnim(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    bool IsExecFade();
    
public:
    UFUNCTION(BlueprintCallable)
    void GimmickFailure();
    
    UFUNCTION(BlueprintCallable)
    void GimmickClear();
    
    UFUNCTION(BlueprintCallable)
    void EndLoopAnims();
    
};

