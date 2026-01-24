#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickInputType.h"
#include "EHbkKorsicaGimmickMarkName.h"
#include "HbkUserWidget.h"
#include "HbkKorsicaGimmickPartsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkKorsicaGimmickPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkKorsicaGimmickPartsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SuccessProc(int32 SuccessNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetAvailableMark(EHbkKorsicaGimmickMarkName MarkName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ReceiveInputData(EHbkKorsicaGimmickMarkName MarkName, EHbkKorsicaGimmickInputType InputType);
    
};

